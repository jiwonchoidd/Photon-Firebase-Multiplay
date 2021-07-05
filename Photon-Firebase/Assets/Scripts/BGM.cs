using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGM : MonoBehaviour
{
    // �̱������� ���
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

    //�뷡 ���� �Լ�
    public void ChangeBGM(int i)
    {
        //����
        //���� �ٲٷ��� �뷡�� ������ �ٸ��� �����
        if (audiosource.clip == bgmArray[i])
        {
            print("�뷡�� �����մϴ�");
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
