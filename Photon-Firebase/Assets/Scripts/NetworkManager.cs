using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    [Header("ErrorPanel")]
    public GameObject errorPanel;
    public Text errorText;

    [Header("LobbyPanel")]
    public Text WelcomeText2;

    [Header("LobbyPanel")]
    public GameObject LobbyPanel;
    public InputField RoomInput;
    public Text WelcomeText;
    public Text LobbyInfoText;
    public Button[] CellBtn;
    public Button PreviousBtn;
    public Button NextBtn;

    [Header("RoomPanel")]
    public GameObject RoomPanel;
    public Text ListText;
    public Text RoomInfoText;
    public Text[] ChatText;
    public InputField ChatInput;
    public Button gameStartbtn;
    public Button readybtn;

    [Header("ETC")]
    public Text StatusText;
    public PhotonView PV;

    List<RoomInfo> myList = new List<RoomInfo>();
    int currentPage = 1, maxPage, multiple;

    public bool isLobby;
    public int readyPlayers=0;
    private bool isReady;
 
    #region 방리스트 갱신
    // ◀버튼 -2 , ▶버튼 -1 , 셀 숫자
    public void MyListClick(int num)
    {
        if (num == -2) --currentPage;
        else if (num == -1) ++currentPage;
        else PhotonNetwork.JoinRoom(myList[multiple + num].Name);
        MyListRenewal();
    }

    void MyListRenewal()
    {
        // 최대페이지
        maxPage = (myList.Count % CellBtn.Length == 0) ? myList.Count / CellBtn.Length : myList.Count / CellBtn.Length + 1;

        // 이전, 다음버튼
        PreviousBtn.interactable = (currentPage <= 1) ? false : true;
        NextBtn.interactable = (currentPage >= maxPage) ? false : true;

        // 페이지에 맞는 리스트 대입
        multiple = (currentPage - 1) * CellBtn.Length;
        for (int i = 0; i < CellBtn.Length; i++)
        {
            CellBtn[i].interactable = (multiple + i < myList.Count) ? true : false;
            CellBtn[i].transform.GetChild(0).GetComponent<Text>().text = (multiple + i < myList.Count) ? myList[multiple + i].Name : "";
            CellBtn[i].transform.GetChild(1).GetComponent<Text>().text = (multiple + i < myList.Count) ? myList[multiple + i].PlayerCount + "/" + myList[multiple + i].MaxPlayers : "";
        }
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        int roomCount = roomList.Count;
        for (int i = 0; i < roomCount; i++)
        {
            if (!roomList[i].RemovedFromList)
            {
                if (!myList.Contains(roomList[i])) myList.Add(roomList[i]);
                else myList[myList.IndexOf(roomList[i])] = roomList[i];
            }
            else if (myList.IndexOf(roomList[i]) != -1) myList.RemoveAt(myList.IndexOf(roomList[i]));
        }
        MyListRenewal();
    }
    #endregion


    #region 서버연결

    private void Start()
    {
        RoomPanel.SetActive(false);
        LobbyPanel.SetActive(false);
        errorPanel.SetActive(false);
        //불값 로비인 경우만 바로 시작시 연결 시도
        if (isLobby)
        Connect();
        //포톤이 씬을 로드함
        PhotonNetwork.AutomaticallySyncScene = true;
    }
    void Awake() => Screen.SetResolution(960, 540, false);

    void Update()
    {
        StatusText.text = PhotonNetwork.NetworkClientState.ToString();
        LobbyInfoText.text = (PhotonNetwork.CountOfPlayers - PhotonNetwork.CountOfPlayersInRooms) + "로비 / " + PhotonNetwork.CountOfPlayers + "접속";
    }

    public void Connect() => PhotonNetwork.ConnectUsingSettings();

    public override void OnConnectedToMaster() => PhotonNetwork.JoinLobby();

    public override void OnJoinedLobby()
    {
        //캐릭터 이름 설정!!
        PhotonNetwork.LocalPlayer.NickName = Autonaming();
        WelcomeText.text = PhotonNetwork.LocalPlayer.NickName;
        WelcomeText2.text = "Welcome, " + WelcomeText.text;

        //리스트 초기화
        myList.Clear();
    }

        // 이메일에서 이름 뺴올꺼임
    private string Autonaming()
    {
        if(AuthManager.User.Email==null)
        {
            string tempname = "Player";
            return tempname;
        }
        //IndexOf는 특정 문자의 인덱스를 문자열에서 찾아 반환한다
        //Substring은 문자열의 위치를 이용하여 컨트롤하는 함수다
        string email = AuthManager.User.Email;
        string golbang = "@";
        int pos = email.IndexOf(golbang);
        return email.Substring(0, pos);
    }

    public void Disconnect() => PhotonNetwork.Disconnect();

    public override void OnDisconnected(DisconnectCause cause)
    {
        LobbyPanel.SetActive(false);
        RoomPanel.SetActive(false);
    }
    #endregion


    #region 방
    public void CreateRoom()
    {
        PhotonNetwork.CreateRoom(RoomInput.text == "" ? "Room" + Random.Range(0, 100) : RoomInput.text, new RoomOptions { MaxPlayers = 4 });
        if(PhotonNetwork.IsMasterClient)
        {
            readybtn.gameObject.SetActive(false);
            gameStartbtn.gameObject.SetActive(true);
        }
        else
        {
            readybtn.gameObject.SetActive(true);
            gameStartbtn.gameObject.SetActive(false);
            PV.RPC("ReadyResetRPC", RpcTarget.All);
        }
    }
    public void JoinRandomRoom()
    {
        PhotonNetwork.JoinRandomRoom();
        if (PhotonNetwork.IsMasterClient)
        {
            readybtn.gameObject.SetActive(false);
            gameStartbtn.gameObject.SetActive(true);
            PV.RPC("UnReadyRPC", RpcTarget.All);
            PV.RPC("ReadyResetRPC", RpcTarget.All);
        }
        else
        {
            readybtn.gameObject.SetActive(true);
            gameStartbtn.gameObject.SetActive(false);
            PV.RPC("UnReadyRPC", RpcTarget.All);
            PV.RPC("ReadyResetRPC", RpcTarget.All);
        }
    }
    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        RoomPanel.SetActive(false);
        PV.RPC("ReadyResetRPC", RpcTarget.All);
    }

    public override void OnJoinedRoom()
    {
        RoomPanel.SetActive(true);
        RoomRenewal();
        ChatInput.text = "";
        for (int i = 0; i < ChatText.Length; i++) ChatText[i].text = "";
        if (PhotonNetwork.IsMasterClient)
        {
            readybtn.gameObject.SetActive(false);
            gameStartbtn.gameObject.SetActive(true);
        }
        else
        {
            readybtn.gameObject.SetActive(true);
            gameStartbtn.gameObject.SetActive(false);
        }
    }

    public override void OnCreateRoomFailed(short returnCode, string message) { RoomInput.text = ""; CreateRoom(); }

    public override void OnJoinRandomFailed(short returnCode, string message) { RoomInput.text = ""; CreateRoom(); }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        RoomRenewal();
        ChatRPC("<color=yellow>" + newPlayer.NickName + "님이 참가하셨습니다</color>");
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        RoomRenewal();
        ChatRPC("<color=yellow>" + otherPlayer.NickName + "님이 퇴장하셨습니다</color>");
    }


    //게임 시작!!!!
    public void GameStart()
    {
        //모두 같은 씬으로 이동하게 됨...
        
        //마스터만 할수 있음 

        if (!PhotonNetwork.IsMasterClient)
        {
            gameStartbtn.enabled = false;
            gameStartbtn.image = null;
            Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
            return;
        }
        else if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
        {
            Debug.Log("혼자입니다..");
        }
        else
        {
            // 레디한 사람과 현재 사람 수가 같다면??
            if(PhotonNetwork.CurrentRoom.PlayerCount-1 == readyPlayers)
            {
            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
            PhotonNetwork.LoadLevel("Play");
            }
            else
            {
                //레디가 안되었음 
                Debug.Log("no ready");
            }
        }
    }

    public override void OnLeftLobby()
    {
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();
        SceneManager.LoadScene("Signin");
    }

    void RoomRenewal()
    {
        ListText.text = "";
        for (int i = 0; i < PhotonNetwork.PlayerList.Length; i++)
            ListText.text += PhotonNetwork.PlayerList[i].NickName + ((i + 1 == PhotonNetwork.PlayerList.Length) ? "" : "\n");
        RoomInfoText.text = PhotonNetwork.CurrentRoom.Name + " / " + PhotonNetwork.CurrentRoom.PlayerCount + " Player / " +PhotonNetwork.CurrentRoom.MaxPlayers+ " MAX";
    }
    #endregion


    #region 채팅
    public void Send()
    {
        if(ChatInput.text=="")
        {
            //만약에 그냥 공백으로 채팅치면
            return;
        }
        PV.RPC("ChatRPC", RpcTarget.All, PhotonNetwork.NickName + " : " + ChatInput.text);
        ChatInput.text = "";
    }

    [PunRPC] // RPC는 플레이어가 속해있는 방 모든 인원에게 전달한다
    void ChatRPC(string msg)
    {
        bool isInput = false;
        for (int i = 0; i < ChatText.Length; i++)
            if (ChatText[i].text == "")
            {
                isInput = true;
                ChatText[i].text = msg;
                break;
            }
        if (!isInput) // 꽉차면 한칸씩 위로 올림
        {
            for (int i = 1; i < ChatText.Length; i++) ChatText[i - 1].text = ChatText[i].text;
            ChatText[ChatText.Length - 1].text = msg;
        }
    }
    #endregion

    #region 레디

    //레디를 하면 
    [PunRPC] // RPC는 플레이어가 속해있는 방 모든 인원에게 전달한다
    void ReadyRPC()
    {
        readyPlayers += 1;
    }
    [PunRPC] // RPC는 플레이어가 속해있는 방 모든 인원에게 전달한다
    void UnReadyRPC()
    {
        readyPlayers -= 1;
    }
    [PunRPC]
    void ReadyResetRPC()
    {
        readyPlayers = 0;
        isReady = false;
        readybtn.gameObject.GetComponentInChildren<Text>().text = "unReady";
    }


    public void OnclickReady()
    {
        StartCoroutine(Delay());
    }

    IEnumerator Delay()
    {
        if(isReady)
        {
            Debug.Log("레디풀림");
            isReady = false;
            PV.RPC("UnReadyRPC", RpcTarget.All);
            readybtn.interactable = false;
            readybtn.gameObject.GetComponentInChildren<Text>().text = "unReady";
            yield return new WaitForSeconds(0.2f);
            readybtn.interactable = true;
        }
        else
        {
            Debug.Log("레디누름");
            isReady = true;
            PV.RPC("ReadyRPC", RpcTarget.All);
            readybtn.interactable = false;
            readybtn.gameObject.GetComponentInChildren<Text>().text = "Ready";
            yield return new WaitForSeconds(0.2f);
            readybtn.interactable = true;
        }
    }
    #endregion

}
