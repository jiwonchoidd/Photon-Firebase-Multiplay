using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
public class PlayerNetwork : MonoBehaviourPun, IPunObservable
{
    public GameObject camara;
    private Slider healthSlider;
    public GameObject hand;
    private Animator animator;
    public PhotonView PV;
    private Vector3 curPos;
    [SerializeField]
    private float healthPoint = 1;
    private float healthPoint_Other = 1;
    public float playerDamage;
    private Quaternion curRot;
   // private CharacterController cc;
    //private Vector3 curPos;

    void Awake()
    {
        //최적화
        PhotonNetwork.SendRate = 60;
        PhotonNetwork.SerializationRate = 30;
    }
    void Start()
    {
        if(PV.IsMine)
        {
            //내 캐릭터라면 몸뚱아리가 안보여져도됨
            healthSlider = GameObject.Find("Canvas_PlayerUI").transform.Find("HealthBar").gameObject.GetComponent<Slider>();
        }
        else
        {
            Destroy(camara);
            //내 캐릭터가 아니라면
            this.GetComponent<PlayerFire>().enabled = false;
            this.GetComponent<PlayerMove>().enabled = false;
            this.GetComponent<PlayerRotation>().enabled = false;
            hand.layer = 3;
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
            // 위치 회전 동기화
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
    #region 캐릭터가 콜라이더에 부딪혔을때의 처리
    void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.gameObject.tag == ("Out"))
        {
            Debug.Log("월드 아웃");
            OutofWorld();
        }
    }
    public void OutofWorld()
    {
        healthPoint = 0;
        //healthSlider.value = healthPoint;
        if (healthPoint <= 0)
        {
            Dead();
        }
    }
    #endregion

    #region 피격 죽음 등등
    public void Hit()
    {
        if(PV.IsMine)
        {

        }
        else
        {
            //상대방에 떄려야 호출됨
            healthPoint = healthPoint_Other;
            healthPoint -= 0.1f;
            //healthSlider.value= healthPoint;
            if(healthPoint<=0)
            {
                Dead();
            }
        }
    }

    private void Dead()
    {
        GameObject.Find("DieCamera").GetComponent<AudioListener>().enabled = true;
        GameObject.Find("Canvas_Die").transform.Find("Panel_Respawn").gameObject.SetActive(true);
        //복제 버그 막기위해 올 버퍼드
        PV.RPC("DestroyRPC", RpcTarget.AllBuffered);
        animator.SetBool("isDead", true);
        GameManager.instance.ISDEAD = true;
        //죽으면 카메라 삭제되어서 기본 카메라 켜줌
    }

    [PunRPC]
    void DestroyRPC() => Destroy(gameObject);
   

    #endregion

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(transform.position);
            stream.SendNext(healthPoint);
            stream.SendNext(transform.rotation);
        }
        else
        {
            curPos = (Vector3)stream.ReceiveNext();
            healthPoint_Other = (float)stream.ReceiveNext();
            curRot = (Quaternion)stream.ReceiveNext();
        }
    }
}
