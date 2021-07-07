using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviourPunCallbacks
{
    //싱글톤 디자인
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
    // 내가 죽었는지??
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
        //인원 수 만큼 시작 시 플레이어 소환
        PV = GetComponent<PhotonView>();
        SpawnPlayer();
        if(PhotonNetwork.IsMasterClient)
        {
            players = GameObject.FindGameObjectsWithTag("Player");
            PickHush();
        }
    }

    //플레이어 소환
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

    void PickHush()
    {
        whichPlayerhush = UnityEngine.Random.Range(0, PhotonNetwork.CurrentRoom.PlayerCount);
        PV.RPC("RPC_SyncImposter", RpcTarget.All, whichPlayerhush);
    }
    //플레이어 랜덤 종족 설정
    [PunRPC]
    private void RPC_SyncImposter(int num)
    {
        whichPlayerhush = num;
        players = GameObject.FindGameObjectsWithTag("Player");
        for (int i=0; i< players.Length; i++ )
        players[i].GetComponent<PlayerNetwork>().BecomeHush(num);
    }

        #region 방 떠나기
        public override void OnLeftRoom()
        {
        // 내가 방을 떠날때
        SceneManager.LoadScene("Lobby");
        }
        // 방을 떠나는 버튼에..
        public void leaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }
        #endregion


}
