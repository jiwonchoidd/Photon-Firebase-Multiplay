using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviourPunCallbacks
{
    public GameObject playerPrefab;
    public GameObject camera;

    public Text tx_time;
    public Text tx_alert;
    public Transform[] spawnPositions;


    private bool isdead=false;
    // ���� �׾�����??
    public bool ISDEAD
    {
        get { return isdead; }
        set
        {
            isdead = value;
        }
    }
    public static GameManager instance;
    private void Awake()
    {
        instance = this;
    }


    void Start()
    {
        SpawnPlayer();
        
    }
    

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
