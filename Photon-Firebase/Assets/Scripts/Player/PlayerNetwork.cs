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
            //�� ĳ���Ͷ�� ���׾Ƹ��� �Ⱥ���������
        }
        else
        {
            Destroy(camara);
            //�� ĳ���Ͱ� �ƴ϶��
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
        //���� ���� �������� �� ���۵�
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
