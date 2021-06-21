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
 
    #region �渮��Ʈ ����
    // ����ư -2 , ����ư -1 , �� ����
    public void MyListClick(int num)
    {
        if (num == -2) --currentPage;
        else if (num == -1) ++currentPage;
        else PhotonNetwork.JoinRoom(myList[multiple + num].Name);
        MyListRenewal();
    }

    void MyListRenewal()
    {
        // �ִ�������
        maxPage = (myList.Count % CellBtn.Length == 0) ? myList.Count / CellBtn.Length : myList.Count / CellBtn.Length + 1;

        // ����, ������ư
        PreviousBtn.interactable = (currentPage <= 1) ? false : true;
        NextBtn.interactable = (currentPage >= maxPage) ? false : true;

        // �������� �´� ����Ʈ ����
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


    #region ��������

    private void Start()
    {
        RoomPanel.SetActive(false);
        LobbyPanel.SetActive(false);
        errorPanel.SetActive(false);
        //�Ұ� �κ��� ��츸 �ٷ� ���۽� ���� �õ�
        if (isLobby)
        Connect();
        //������ ���� �ε���
        PhotonNetwork.AutomaticallySyncScene = true;
    }
    void Awake() => Screen.SetResolution(960, 540, false);

    void Update()
    {
        StatusText.text = PhotonNetwork.NetworkClientState.ToString();
        LobbyInfoText.text = (PhotonNetwork.CountOfPlayers - PhotonNetwork.CountOfPlayersInRooms) + "�κ� / " + PhotonNetwork.CountOfPlayers + "����";
    }

    public void Connect() => PhotonNetwork.ConnectUsingSettings();

    public override void OnConnectedToMaster() => PhotonNetwork.JoinLobby();

    public override void OnJoinedLobby()
    {
        //ĳ���� �̸� ����!!
        PhotonNetwork.LocalPlayer.NickName = Autonaming();
        WelcomeText.text = PhotonNetwork.LocalPlayer.NickName;
        WelcomeText2.text = "Welcome, " + WelcomeText.text;

        //����Ʈ �ʱ�ȭ
        myList.Clear();
    }

        // �̸��Ͽ��� �̸� ���ò���
    private string Autonaming()
    {
        if(AuthManager.User.Email==null)
        {
            string tempname = "Player";
            return tempname;
        }
        //IndexOf�� Ư�� ������ �ε����� ���ڿ����� ã�� ��ȯ�Ѵ�
        //Substring�� ���ڿ��� ��ġ�� �̿��Ͽ� ��Ʈ���ϴ� �Լ���
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


    #region ��
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
        ChatRPC("<color=yellow>" + newPlayer.NickName + "���� �����ϼ̽��ϴ�</color>");
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        RoomRenewal();
        ChatRPC("<color=yellow>" + otherPlayer.NickName + "���� �����ϼ̽��ϴ�</color>");
    }


    //���� ����!!!!
    public void GameStart()
    {
        //��� ���� ������ �̵��ϰ� ��...
        
        //�����͸� �Ҽ� ���� 

        if (!PhotonNetwork.IsMasterClient)
        {
            gameStartbtn.enabled = false;
            gameStartbtn.image = null;
            Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
            return;
        }
        else if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
        {
            Debug.Log("ȥ���Դϴ�..");
        }
        else
        {
            // ������ ����� ���� ��� ���� ���ٸ�??
            if(PhotonNetwork.CurrentRoom.PlayerCount-1 == readyPlayers)
            {
            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
            PhotonNetwork.LoadLevel("Play");
            }
            else
            {
                //���� �ȵǾ��� 
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


    #region ä��
    public void Send()
    {
        if(ChatInput.text=="")
        {
            //���࿡ �׳� �������� ä��ġ��
            return;
        }
        PV.RPC("ChatRPC", RpcTarget.All, PhotonNetwork.NickName + " : " + ChatInput.text);
        ChatInput.text = "";
    }

    [PunRPC] // RPC�� �÷��̾ �����ִ� �� ��� �ο����� �����Ѵ�
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
        if (!isInput) // ������ ��ĭ�� ���� �ø�
        {
            for (int i = 1; i < ChatText.Length; i++) ChatText[i - 1].text = ChatText[i].text;
            ChatText[ChatText.Length - 1].text = msg;
        }
    }
    #endregion

    #region ����

    //���� �ϸ� 
    [PunRPC] // RPC�� �÷��̾ �����ִ� �� ��� �ο����� �����Ѵ�
    void ReadyRPC()
    {
        readyPlayers += 1;
    }
    [PunRPC] // RPC�� �÷��̾ �����ִ� �� ��� �ο����� �����Ѵ�
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
            Debug.Log("����Ǯ��");
            isReady = false;
            PV.RPC("UnReadyRPC", RpcTarget.All);
            readybtn.interactable = false;
            readybtn.gameObject.GetComponentInChildren<Text>().text = "unReady";
            yield return new WaitForSeconds(0.2f);
            readybtn.interactable = true;
        }
        else
        {
            Debug.Log("���𴩸�");
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
