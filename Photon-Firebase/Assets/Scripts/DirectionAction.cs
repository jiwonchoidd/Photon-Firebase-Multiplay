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
        //현재 진행중인 시간이 전체 시간과 크거나 같으면 재상시간이 다 되면
        if(pd.time >= pd.duration)
        {
            if(Camera.main==targetCam)
            {
                targetCam.GetComponent<CinemachineBrain>().enabled = false;
            }
            //시네머신에 사용한 카메라도 비활성화 해라
            targetCam.gameObject.SetActive(false);
            //디렉터 자신을 비활성화
            gameObject.SetActive(false);
        }
    }
}
