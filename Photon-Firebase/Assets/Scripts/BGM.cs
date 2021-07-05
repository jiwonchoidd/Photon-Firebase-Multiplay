using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGM : MonoBehaviour
{
    // 싱글톤으로 운용
    private static BGM instance = null;

    public AudioClip[] bgmArray;
    private AudioSource audiosource;
    public static BGM Instance
    {
        get { return instance; }
    }


    void Start()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        else
        {
            instance = this;
        }
        
        DontDestroyOnLoad(this.gameObject);
        audiosource = GetComponent<AudioSource>();
        audiosource.volume = PlayerPrefs.GetFloat("bgmvol");
    }

    //노래 변경 함수
    public void ChangeBGM(int i)
    {
        //멈춤
        //지금 바꾸려는 노래가 이전과 다르면 멈춰라
        if (audiosource.clip == bgmArray[i])
        {
            print("노래를 유지합니다");
        }
        else
        {
            audiosource.clip = bgmArray[i];
            audiosource.Play();
        }
    }
    public void VolChange(float i)
    {
        audiosource.volume = i;
    }

}
