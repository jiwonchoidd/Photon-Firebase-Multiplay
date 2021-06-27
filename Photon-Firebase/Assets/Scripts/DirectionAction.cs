using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using Cinemachine;
public class DirectionAction : MonoBehaviour
{
    PlayableDirector pd;
    public Camera targetCam;

    void Start()
    {
        pd = GetComponent<PlayableDirector>();
        pd.Play();
    }

    // Update is called once per frame
    void Update()
    {
        //���� �������� �ð��� ��ü �ð��� ũ�ų� ������ ���ð��� �� �Ǹ�
        if(pd.time >= pd.duration)
        {
            if(Camera.main==targetCam)
            {
                targetCam.GetComponent<CinemachineBrain>().enabled = false;
            }
            //�ó׸ӽſ� ����� ī�޶� ��Ȱ��ȭ �ض�
            targetCam.gameObject.SetActive(false);
            //���� �ڽ��� ��Ȱ��ȭ
            gameObject.SetActive(false);
        }
    }
}
