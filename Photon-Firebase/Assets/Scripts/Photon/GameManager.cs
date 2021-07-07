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
    private int whichPlayerhush;
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
        PV = GetComponent<PhotonView>();
        SpawnPlayer();
        if(PhotonNetwork.IsMasterClient)
        {
            players = GameObject.FindGameObjectsWithTag("Player");
            PickHush();
        }
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
        
    }

    void PickHush()
    {
        whichPlayerhush = UnityEngine.Random.Range(0, PhotonNetwork.CurrentRoom.PlayerCount);
        PV.RPC("RPC_SyncImposter", RpcTarget.All, whichPlayerhush);
    }
    //�÷��̾� ���� ���� ����
    [PunRPC]
    private void RPC_SyncImposter(int num)
    {
        whichPlayerhush = num;
        players = GameObject.FindGameObjectsWithTag("Player");
        for (int i=0; i< players.Length; i++ )
        players[i].GetComponent<PlayerNetwork>().BecomeHush(num);
    }

        #region �� ������
        public override void OnLeftRoom()
        {
        // ���� ���� ������
        SceneManager.LoadScene("Lobby");
        }
        // ���� ������ ��ư��..
        public void leaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }
        #endregion


}
