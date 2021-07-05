using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class DeathCam : MonoBehaviour
{
    private CinemachineVirtualCamera vcam;
    private GameObject[] currentplayers;
    private int targetIndex=0;
    private void Start()
    {
        vcam = GetComponent<CinemachineVirtualCamera>();
    }

    void Update()
    {
        if(GameManager.instance.ISDEAD)
        {
            //만약 죽었다면 카메라를 자식 오브젝트에서 꺼내온다.
            this.transform.parent = null;
            //데스캠으로 활동한다.
            DeathCamClick();
            
        }

    }
    //씨네머신 프레임워크를 활용한다.
    private void DeathCamClick()
    {
        currentplayers = GameManager.instance.PLAYERS;
        targetIndex=ChangeIndex(targetIndex);
        if (currentplayers!=null)
        {
            //print(currentplayers.Length);
            //vcam.gameObject.transform.position = currentplayers[targetIndex].transform.position + new Vector3(0f, 3f, 0f);
            //트라이 캐치문으로 배열 인덱스 예외 처리 해줌
            try
            {
                vcam.Follow = currentplayers[targetIndex].transform;
                vcam.LookAt = currentplayers[targetIndex].transform;
            }
            catch (IndexOutOfRangeException e)
            {
                targetIndex = 0;
            }
        }
    }

    private int ChangeIndex(int index)
    {
        if (Input.GetButtonDown("Fire1"))
        {
            index += 1;
            if (index>currentplayers.Length)
            {
                index = 0;
            }
        }

        return index;
    }
}
