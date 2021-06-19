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
    // 내가 죽었는지??
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
            //방장일 경우?
        }*/

        var localPlayerIndex = PhotonNetwork.LocalPlayer.ActorNumber - 1;

        var spawnPosition = spawnPositions[localPlayerIndex];
        // 플레이어 생성 
        PhotonNetwork.Instantiate(playerPrefab.name, spawnPosition.position, spawnPosition.rotation);
    }

    #region 방 떠나기
    // 방을 떠나는 버튼에..
    public void leaveRoom()
    {
        PhotonNetwork.LeaveRoom();
    }
    public override void OnLeftRoom()
    {
        // 내가 방을 떠날때
        SceneManager.LoadScene("Lobby");
    }
    #endregion



}
