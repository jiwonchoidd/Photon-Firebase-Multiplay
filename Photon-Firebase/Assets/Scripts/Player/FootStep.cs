using StarterAssets;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class FootStep : MonoBehaviour
{
    [SerializeField]
    private AudioClip[] stoneClips;
    [SerializeField]
    private AudioClip[] mudClips;
    [SerializeField]
    private AudioClip[] grassClips;

    int floorIndex;
    private PhotonView PV;
    private void Awake()
    {
        PV = GetComponent<PhotonView>();
    }

    //애니메이션이랑 연동되어 있는 step
    private void Step()
    {
        DetectFloor();
        if(PV.IsMine)
        PV.RPC("RPCWalkSound", RpcTarget.All);
    }

    private AudioClip GetRandomClip() //0 스톤 1 잔디 2 나무
    {
        switch (floorIndex)
        {
            case 0:
                return stoneClips[UnityEngine.Random.Range(0, stoneClips.Length)];
            case 1:
                return mudClips[UnityEngine.Random.Range(0, mudClips.Length)];
            case 2:
            default:
                return grassClips[UnityEngine.Random.Range(0, grassClips.Length)];
        }

    }

    private void DetectFloor()
    {
       
            Ray ray = new Ray(transform.position, Vector3.down);
            RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity))
        {
            var floortag = hitInfo.collider.gameObject.tag;
            if (floortag == "Stone")
            {
                floorIndex = 0;
            }
            else if (floortag == "Grass")
            {
                floorIndex = 1;
            }
            else if (floortag == "Wood")
            {
                floorIndex = 2;
            }

        }
    }

    [PunRPC]
    public void RPCWalkSound()
    {
        AudioSource audioRPC = gameObject.AddComponent<AudioSource>();
        AudioClip clip = GetRandomClip();
        audioRPC.spatialBlend = 1;
        audioRPC.minDistance = 7;
        audioRPC.maxDistance = 15;
        if (gameObject.GetComponent<Animator>().GetFloat("Speed") > 2.4f && !audioRPC.isPlaying)
        audioRPC.PlayOneShot(clip);
    }
}
