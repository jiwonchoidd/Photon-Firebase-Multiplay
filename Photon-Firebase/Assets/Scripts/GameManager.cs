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
    public Text introText;
    public Transform[] spawnPositions;
    public PhotonView PV;
    private bool isdead=false;
    [SerializeField]
    private GameObject[] players;
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
        //인원 수 만큼 시작 시 플레이어 소환
        SpawnPlayer();
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
        PV.RPC("RandomPlayerType", RpcTarget.AllBuffered ,localPlayerIndex );
    }
    //플레이어 랜덤 종족 설정
    [PunRPC]
    private void RandomPlayerType(int i)
    {
        //1. 배열에 플레이어들 다 담아줍니다.
            //if (players == null)
            players = GameObject.FindGameObjectsWithTag("Player");
        //2. 랜덤 함수로 종족 설정
        var random = UnityEngine.Random.Range(0, i+1);
        //3. 프로퍼티에 등록한 사람 불값을 펄스로 해놓음.
        players[random].GetComponent<PlayerNetwork>().ISHUMAN = false;
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
