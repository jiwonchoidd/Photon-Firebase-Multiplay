using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using StarterAssets;

public class PlayerNetwork : MonoBehaviourPun, IPunObservable
{
    public GameObject camara;
    private Slider healthSlider;
    public GameObject hand;
    private Animator animator;
    public PhotonView PV;
    private Vector3 curPos;
    [SerializeField]
    public float playerDamage;
    private Quaternion curRot;

    public GameObject skeleton;
    // private CharacterController cc;
    //private Vector3 curPos;

    float _hp = 1;
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
                healthSlider.value = _hp;
            }
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
            //�� ĳ���Ͷ�� ���׾Ƹ��� �Ⱥ���������
            healthSlider = GameObject.Find("Canvas").transform.Find("HealthBar").gameObject.GetComponent<Slider>();
            setRigidbodyState(true);
            setColliderState(false);
        }
        else
        {
            camara.SetActive(false);
            //�� ĳ���Ͱ� �ƴ϶��
            this.GetComponent<ThirdPersonController>().enabled = false;
            hand.layer = 3;
            setRigidbodyState(true);
            setColliderState(false);
        }
                        
        
        animator = GetComponent<Animator>();
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

    private void Dead()
    {
        //GameObject.Find("Canvas_Die").transform.Find("Panel_Respawn").gameObject.SetActive(true);
        //���� ���� �������� �� ���۵�
        PV.RPC("DestroyRPC", RpcTarget.AllBuffered);
        //animator.SetBool("isDead", true);
        GameManager.instance.ISDEAD = true;
        //������ ī�޶� �����Ǿ �⺻ ī�޶� ����
    }

    [PunRPC]
    void DestroyRPC()
    {
        gameObject.GetComponent<Animator>().enabled = false;
        Destroy(gameObject, 5f);
        setRigidbodyState(false);
        setColliderState(true);
    }

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
        }
        else
        {
            curPos = (Vector3)stream.ReceiveNext();
            curRot = (Quaternion)stream.ReceiveNext();
        }
    }
}
