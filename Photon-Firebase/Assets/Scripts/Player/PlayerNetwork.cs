using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using StarterAssets;

public class PlayerNetwork : MonoBehaviourPun, IPunObservable
{
    public GameObject light;
    public GameObject here_obj;
    public GameObject playerCanvas;
    public GameObject typeImg;
    public Slider healthSlider;
    public GameObject camara;
    public GameObject body_obj;
    private string playerName;
    public PhotonView PV;
    private Vector3 curPos;
    [SerializeField]
    public float playerDamage;
    private Quaternion curRot;
    public GameObject skeleton;
    public GameObject img_hurt;
    [SerializeField]
    private bool isHuman=true;
    public bool ISHUMAN
    {
        get
        {
            return isHuman;
        }
        set
        {
            isHuman = value;
            if(PV.IsMine)
            {
                //�޸� �ؽ�Ʈ �׸� ��� ����������
                if (ISHUMAN == false)
                {
                    GameManager.instance.introText.text = "You're the Hush";
                    light.SetActive(false);
                }
                else
                    GameManager.instance.introText.text = "You're a Human";
            }
       
        }
    }
    // private CharacterController cc;
    //private Vector3 curPos;

    float _hp = 1;


    private Vector3 impact = Vector3.zero;
    private float mass=3.0f;

    public float HP
    {
        get
        {
            return _hp;
        }
        set
        {
            _hp = value;
            if (PV.IsMine)
            {
                if(healthSlider.value>_hp)
                {
                    if (!img_hurt.activeSelf) StartCoroutine(HurtImg());
                }
                healthSlider.value = _hp;
            }
            // ���࿡ �ǰ� 0�϶�, �׾�����
            if(_hp<=0)
            {
                // �� �϶��� ó���ϵ��� ��
                if(PV.IsMine)
                {
                //1. �׾���ϴ�  �༮�� ������ Ŭ���̾�Ʈ���? �ٸ��༮���� ������Ŭ���̾�Ʈ ���� �ѱ��.
                if(PhotonNetwork.IsMasterClient)
                {
                    PhotonNetwork.SetMasterClient(PhotonNetwork.MasterClient.GetNext());
                }
                //�� ������ ��..
                Dead();
                }
            }
        }
    }

    void Awake()
    {
        //����ȭ
        PhotonNetwork.SendRate = 60;
        PhotonNetwork.SerializationRate = 30;
    }


    void Start()
    {
        if(PV.IsMine)
        {
            this.GetComponent<PlayerFire>().enabled = false;
            setRigidbodyState(true);
            setColliderState(false);
            //�� ĳ���Ͷ�� ���׾Ƹ��� �Ⱥ���������
            playerName = PhotonNetwork.LocalPlayer.NickName;
        }
        else
        {
            //�� ĳ���Ͱ� �ƴ϶��
            //Canvas�������.
            playerCanvas.SetActive(false);
            camara.SetActive(false);
            this.GetComponent<ThirdPersonController>().enabled = false;
            this.GetComponent<PlayerFire>().enabled = false;
            body_obj.layer = 3;
            setRigidbodyState(true);
            setColliderState(false);
            DetectEnemy();
        }
                        
    }

    private void Update()
    {
        if (PV.IsMine)
        {
            
        }
        else
        {
            // ��ġ ȸ�� ����ȭ
            if ((transform.position - curPos).sqrMagnitude >= 100)
            {
                transform.position = curPos;
                transform.rotation = curRot;
            }
            else
            {
                transform.position = Vector3.Lerp(transform.position, curPos, Time.deltaTime * 10);
                transform.rotation = Quaternion.Lerp(transform.rotation, curRot, Time.deltaTime * 10);
            }
        
        }
            //���ݴ��� ����Ʈ�� ������ �κ�
            if (impact.magnitude > 0.2)
            {
                this.GetComponent<CharacterController>().Move(impact * Time.deltaTime);
            }
            impact = Vector3.Lerp(impact, Vector3.zero, 20 * Time.deltaTime);
    }
    #region ĳ���Ͱ� �ݶ��̴��� �ε��������� ó��
    void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.gameObject.tag == ("Out"))
        {
            Debug.Log("���� �ƿ�");
            OutofWorld();
        }
    }
    public void OutofWorld()
    {
        HP=0;
    }
    #endregion

    #region �ǰ� ���� ���
    // �ǰ� ���� �̹��� ���
    IEnumerator HurtImg()
    {
        img_hurt.SetActive(true);
        yield return new WaitForSeconds(1f);
        img_hurt.SetActive(false);
    }
    
    public void AddImpact(Vector3 dir, float force)
    {
        dir.Normalize();
        if (dir.y < 0)
            dir.y = -dir.y; // reflect down force on the ground
        impact += dir.normalized * force / mass;
    }
    private void Dead()
    {
        //���� ���� �������� �� ���۵�
        PV.RPC("DestroyRPC", RpcTarget.AllBuffered);

        //���ӸŴ����� �׾��ٴ°� ǥ���Ѵ�.
        GameManager.instance.ISDEAD = true;
        //ų�α�!!!
        KillLog.instance.KILLLOG = playerName;
    }

    [PunRPC]
    void DestroyRPC()
    {
       //�浹 ������ ���� ĳ���� ��Ʈ�ѷ��� ���ְ� �ִϸ��̼��� ���� 
        gameObject.GetComponent<CharacterController>().enabled = false;
        gameObject.GetComponent<ThirdPersonController>().enabled = false;
        gameObject.GetComponent<Animator>().enabled = false;
        gameObject.GetComponent<PlayerFire>().enabled = false;
        playerCanvas.SetActive(false);
        //�ı���������
        //Destroy(gameObject, 6f);
        setRigidbodyState(false);
        setColliderState(true);
    }

    // ------���׵� ����------
    void setRigidbodyState(bool state)
    {
        Rigidbody[] rigidbodies = skeleton.GetComponentsInChildren<Rigidbody>();
        foreach(Rigidbody rigidbody in rigidbodies)
        {
            rigidbody.isKinematic = state;
        }
        //GetComponent<Rigidbody>().isKinematic = !state;
    }

    void setColliderState(bool state)
    {
        Collider[] colliders = skeleton.GetComponentsInChildren<Collider>();
        foreach (Collider collider in colliders)
        {
            collider.enabled= state;
        }
        //GetComponent<Collider>().enabled = !state;
    }

    #endregion

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
            stream.SendNext(isHuman);
        }
        else
        {
            curPos = (Vector3)stream.ReceiveNext();
            curRot = (Quaternion)stream.ReceiveNext();
            this.isHuman = (bool)stream.ReceiveNext();
        }
    }

    // �㽬�� �Ǿ��!!!
    public void BecomeHush(int hushNumber)
    {
        if (PhotonNetwork.LocalPlayer == PhotonNetwork.PlayerList[hushNumber])
        {
            ISHUMAN = false;
            typeImg.GetComponent<TypeImg>().ChangeImg();
            StartCoroutine(FogDelay());
            StartCoroutine(DetectEnemy());
            light.SetActive(false);

            //Ž�� ���̾� �ڵ� ���̾�
            GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
            for (int i = 0; i < players.Length; i++)
            {
                players[i].transform.FindChild("HERE").gameObject.layer = 6;
            } 
        }
    }
    IEnumerator FogDelay()
    {
        yield return new WaitForSeconds(5f);
        Fog.instance.LinearStart = -3f;
        Fog.instance.LinearEnd = 1.3f;
        this.GetComponent<PlayerFire>().enabled = true;
    }

    IEnumerator DetectEnemy()
    {
        here_obj.SetActive(false);
        if (gameObject.GetComponent<Animator>().GetFloat("Speed") > 3f)
        {
            here_obj.SetActive(true);
            yield return new WaitForSeconds(1f);
        }
    }
}
