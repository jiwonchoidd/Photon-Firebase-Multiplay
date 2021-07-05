using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviourPunCallbacks
{
    //�̱��� ������
    public static GameManager instance;
    private void Awake()
    {
        instance = this;
    }
    public GameObject playerPrefab;
    public Text introText;
    public Transform[] spawnPositions;
    public PhotonView PV;
    private bool isdead=false;
    [SerializeField]
    private GameObject[] players;
    public GameObject[] PLAYERS
    {
        get { return players; }
        set
        {
        }
    }
    // ���� �׾�����??
    public bool ISDEAD
    {
        get { return isdead; }
        set
        {
            isdead = value;
        }
    }


    void Start()
    {
        //�ο� �� ��ŭ ���� �� �÷��̾� ��ȯ
        SpawnPlayer();
    }

    private void Update()
    {
        //1. �迭�� �÷��̾�� �� ����ݴϴ�.
        //if (players == null)
        players = GameObject.FindGameObjectsWithTag("Player");
    }
    //�÷��̾� ��ȯ
    private void SpawnPlayer()
    {
        /*if(PhotonNetwork.IsMasterClient)
        {
            //������ ���?
        }*/

        var localPlayerIndex = PhotonNetwork.LocalPlayer.ActorNumber - 1;
        var spawnPosition = spawnPositions[localPlayerIndex];
        // �÷��̾� ���� 
        PhotonNetwork.Instantiate(playerPrefab.name, spawnPosition.position, spawnPosition.rotation);
        PV.RPC("RandomPlayerType", RpcTarget.AllBuffered ,localPlayerIndex );
    }
    //�÷��̾� ���� ���� ����
    [PunRPC]
    private void RandomPlayerType(int i)
    {
        //1. �迭�� �÷��̾�� �� ����ݴϴ�.
        //if (players == null)
        players = GameObject.FindGameObjectsWithTag("Player");
        //2. ���� �Լ��� ���� ����
        var random = UnityEngine.Random.Range(0, i);
        //3. ������Ƽ�� ����� ��� �Ұ��� �޽��� �س���.
        players[random].GetComponent<PlayerNetwork>().ISHUMAN = false;

    }

        #region �� ������
        // ���� ������ ��ư��..
        public void leaveRoom()
    {
        PhotonNetwork.LeaveRoom();
    }
    public override void OnLeftRoom()
    {
        // ���� ���� ������
        SceneManager.LoadScene("Lobby");
    }
    #endregion



}
