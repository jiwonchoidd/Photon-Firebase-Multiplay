using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
public class PlayerNetwork : MonoBehaviourPun
{
    public GameObject camara;
    private Slider healthSlider;
    public GameObject hand;
    private Animator animator;
   // private CharacterController cc;
    //private Vector3 curPos;
    void Start()
    {

        if(photonView.IsMine)
        {
            //내 캐릭터라면 몸뚱아리가 안보여져도됨
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
                        
        healthSlider = GameObject.Find("Canvas_PlayerUI").transform.Find("HealthBar").gameObject.GetComponent<Slider>();
        animator = GetComponent<Animator>();
    }

    /*    private void Update()
        {
            if (photonView.IsMine)
            {

            }
            else
            {
            if ((transform.position - curPos).sqrMagnitude >= 100) transform.position = curPos;
            else transform.position = Vector3.Lerp(transform.position, curPos, Time.deltaTime * 10);
            }
        }*/
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
        healthSlider.value = 0f;
        if (healthSlider.value <= 0)
        {
            Dead();
        }
    }
    #endregion
    public void Hit()
    {
        healthSlider.value-= 0.1f;
        if(healthSlider.value<=0)
        {
            Dead();
        }
    }

    private void Dead()
    {
        GameObject.Find("Canvas_Die").transform.Find("Panel_Respawn").gameObject.SetActive(true);
        //복제 버그 막기위해 올 버퍼드
        photonView.RPC("DestroyRPC", RpcTarget.AllBuffered);
        animator.SetBool("isDead", true);
        GameManager.instance.ISDEAD = true;
    }

    [PunRPC]
    void DestroyRPC() => Destroy(gameObject);

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            //stream.SendNext(transform.position);
            stream.SendNext(healthSlider.value);
        }
        else
        {
            //curPos = (Vector3)stream.ReceiveNext();
            healthSlider.value = (float)stream.ReceiveNext();
        }
    }
}
