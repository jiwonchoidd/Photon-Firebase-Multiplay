using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KillLog : MonoBehaviour
{
    public PhotonView PV;
    public static KillLog instance;
    private void Awake()
    {
        instance = this;
    }

    private Text text_Killlog;
    //PlayerNetWork에서 죽었을때 감지해서 내보내자 1. 죽은 사람
    private string killName = "";
    public string KILLLOG
    {
        get { return killName; }
        set
        {
            killName = value;
            if(killName!= "")
            {

                PV.RPC("KillLogRPC", RpcTarget.All, killName);
                killName = "";
            }
        }
    }
    private void Start()
    {
        text_Killlog=gameObject.GetComponent<Text>();   
    }


    IEnumerator ShowKillLog(string killName)
    {
        text_Killlog.text = "- " + killName + " is dead..";
        yield return new WaitForSeconds(5f);
        text_Killlog.text = "";
    }
    [PunRPC]
    void KillLogRPC(string killName)
    {
        StartCoroutine(ShowKillLog(killName));
    }
}
