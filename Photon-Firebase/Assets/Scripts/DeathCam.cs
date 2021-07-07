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
            //���� �׾��ٸ� ī�޶� �ڽ� ������Ʈ���� �����´�.
            this.transform.parent = null;
            //����ķ���� Ȱ���Ѵ�.
            DeathCamClick();
            
        }

    }
    //���׸ӽ� �����ӿ�ũ�� Ȱ���Ѵ�.
    private void DeathCamClick()
    {
        currentplayers = GameManager.instance.PLAYERS;
        if (currentplayers!=null)
        {
            //print(currentplayers.Length);
            //vcam.gameObject.transform.position = currentplayers[targetIndex].transform.position + new Vector3(0f, 3f, 0f);
            //Ʈ���� ĳġ������ �迭 �ε��� ���� ó�� ����
            try
            {
                targetIndex=ChangeIndex(targetIndex);
                vcam.Follow = currentplayers[targetIndex].transform;
                vcam.LookAt = currentplayers[targetIndex].transform;
            }
            catch (System.IndexOutOfRangeException e)
            {
                targetIndex = 0;
                currentplayers = GameManager.instance.PLAYERS;
            }
            catch (NullReferenceException e)
            {
                targetIndex = 0;
                currentplayers = GameManager.instance.PLAYERS;
            }
        }
    }

    private int ChangeIndex(int index)
    {
        if (Input.GetButtonDown("Fire1"))
        {
            index += 1;
            if (index>currentplayers.Length || currentplayers.Length==1)
            {
                index = 0;
            }
        }

        return index;
    }
}
