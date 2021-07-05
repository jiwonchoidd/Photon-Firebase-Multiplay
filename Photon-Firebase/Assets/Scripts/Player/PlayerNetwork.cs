using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using StarterAssets;

public class PlayerNetwork : MonoBehaviourPun, IPunObservable
{
    public GameObject playerCanvas;
    public Slider healthSlider;
    public GameObject camara;
    public GameObject hand;
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
            if (PV.IsMine)
            {
                //휴면 텍스트 그림 등등 설정해주자
                if (!isHuman)
                GameManager.instance.introText.text = "You're the Hush";

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
            // 만약에 피가 0일때, 죽었을때
            if(_hp<=0)
            {
                // 나 일때만 처리하도록 함
                if(PV.IsMine)
                {
                //1. 죽어야하는  녀석이 마스터 클라이언트라면? 다른녀석한테 마스터클라이언트 권한 넘긴다.
                if(PhotonNetwork.IsMasterClient)
                {
                    PhotonNetwork.SetMasterClient(PhotonNetwork.MasterClient.GetNext());
                }
                //방 나가도 됨..
                Dead();
                }
            }
        }
    }

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
            setRigidbodyState(true);
            setColliderState(false);
            //내 캐릭터라면 몸뚱아리가 안보여져도됨
            playerName = PhotonNetwork.LocalPlayer.NickName;
        }
        else
        {
            //내 캐릭터가 아니라면
            //Canvas꺼줘야함.
            playerCanvas.SetActive(false);
            camara.SetActive(false);
            this.GetComponent<ThirdPersonController>().enabled = false;
            hand.layer = 3;
            setRigidbodyState(true);
            setColliderState(false);
            
        }
                        
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
            //공격당함 임팩트를 적용할 부분
            if (impact.magnitude > 0.2)
            {
                this.GetComponent<CharacterController>().Move(impact * Time.deltaTime);
            }
            impact = Vector3.Lerp(impact, Vector3.zero, 20 * Time.deltaTime);
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
        HP=0;
    }
    #endregion

    #region 피격 죽음 등등
    // 피격 당한 이미지 출력
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
        //복제 버그 막기위해 올 버퍼드
        PV.RPC("DestroyRPC", RpcTarget.AllBuffered);
        //animator.SetBool("isDead", true);
        //게임매니져에 죽었다는걸 표시한다.
        GameManager.instance.ISDEAD = true;
        //킬로그!!!
        KillLog.instance.KILLLOG = playerName;

    }

    [PunRPC]
    void DestroyRPC()
    {
       //충돌 방지를 위해 캐릭터 컨트롤러를 꺼주고 애니메이션을 꺼줌 
        gameObject.GetComponent<CharacterController>().enabled = false;
        gameObject.GetComponent<ThirdPersonController>().enabled = false;
        gameObject.GetComponent<Animator>().enabled = false;
        //파괴하지말자
        //Destroy(gameObject, 6f);

        //래그돌 활성화 근데 밋밋해서 addforce 넣으면 좋을것같음
        setRigidbodyState(false);
        setColliderState(true);
    }

    // ------래그돌 영역------
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
