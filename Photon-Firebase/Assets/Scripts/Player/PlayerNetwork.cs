using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
public class PlayerNetwork : MonoBehaviourPun
{
    public GameObject camara;
    private Slider healthSlider;
    private Vector3 curPos;
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
            // 
            if((transform.position-curPos).sqrMagnitude>= 100) transform.position = curPos;
            else transform.position=Vector3.Lerp(transform.position, curPos, Time.deltaTime *10);
        }

        healthSlider = GameObject.Find("HealthBar").GetComponent<Slider>();
    }

    public void Hit()
    {
        healthSlider.value-= 0.1f;
        if(healthSlider.value<=0)
        {
            GameObject.Find("Canvas_Die").transform.Find("Panel_Respawn").gameObject.SetActive(true);
            photonView.RPC("DestroyRPC", RpcTarget.AllBuffered); 
            //복제 버그 막기위해 올 버퍼드
        }
    }

    [PunRPC]
    void DestroyRPC() => Destroy(gameObject);

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(stream.IsWriting)
        {
            stream.SendNext(transform.position);
            stream.SendNext(healthSlider.value);
        }
        else
        {
            curPos = (Vector3)stream.ReceiveNext();
            healthSlider.value = (float)stream.ReceiveNext();
        }
    }
}
