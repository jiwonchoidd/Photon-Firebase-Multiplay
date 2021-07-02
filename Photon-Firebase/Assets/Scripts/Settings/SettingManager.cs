using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SettingManager : MonoBehaviour
{
    // 플레이어 프랩스를 쓰면 아주 편하다구!
    // 오디오(뮤직, 효과음)
    [Header("Audio")]
    public Slider bgmVol;
    public Slider effectVol;
    //비디오(해상도,FOV,그림자 끄기)
    [Header("Video")]
    public Toggle fullScreen;
    public Dropdown resolution;
    public Slider fov;
    public Text text_fov;
    bool isfull;
    float fovValve;
    [Header("Control")]
    //마우스(마우스 감도)
    public Slider mouseSen;
    public Text text_MouseSen;
    float mouseValve;
    //패널
    public GameObject panelSetting;
    void Start()
    {
        //화면 안꺼지게
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        panelSetting.SetActive(false);
        HasKey();
        LoadSetting();
    }

    #region 저장 로드
    public void SaveSetting()
    {
        //오디오
        PlayerPrefs.SetFloat("bgmvol",bgmVol.value);
        PlayerPrefs.SetFloat("effectvol", effectVol.value);
        //비디오
        PlayerPrefs.SetInt("fullscreen", isfull? 1 : 0);
        PlayerPrefs.SetInt("resolution", resolution.value);
        PlayerPrefs.SetFloat("fov", fov.value);
        //조작
        PlayerPrefs.SetFloat("mousesen", mouseSen.value);

        PlayerPrefs.Save();
    }
    public void LoadSetting()
    {
        //처음이나 취소할때 로드
        //오디오
        bgmVol.value = PlayerPrefs.GetFloat("bgmvol");
        effectVol.value = PlayerPrefs.GetFloat("effectvol");
        OnBGMChange();
        //비디오
        if (PlayerPrefs.GetInt("fullscreen") == 1)
        {
            isfull = true;
            fullScreen.isOn = true;
        }
        else if (PlayerPrefs.GetInt("fullscreen") == 0)
        {
            isfull = false;
            fullScreen.isOn = false;
        }
        OnFullscreen();
        resolution.value=PlayerPrefs.GetInt("resolution");
        OnRes();
        fov.value = PlayerPrefs.GetFloat("fov");
        OnFov();
        //조작
        mouseSen.value = PlayerPrefs.GetFloat("mousesen");
        OnMouseSens();
    }
    void HasKey()
    {
        //int
        InitSettingi("fullscreen", 1);
        InitSettingi("resolution", 1);
        //float
        InitSettingf("bgmvol", 1);
        InitSettingf("effectvol",1);
        InitSettingf("fov", 60);
        InitSettingf("mousesen", 60);
        PlayerPrefs.Save();
    }
    void InitSettingf(string name, float i)
    {
        if (!PlayerPrefs.HasKey(name))
        {
            PlayerPrefs.SetFloat(name,i);
        }
    }
    void InitSettingi(string name, int i)
    {
        if (!PlayerPrefs.HasKey(name))
        {
            PlayerPrefs.SetInt(name, i);
        }
    }
    #endregion

    #region 오디오 설정
    public void OnBGMChange()
    {
        BGM.Instance.VolChange(bgmVol.value);
    }
    public void OnEffectChange()
    {
        SFX.Instance.VolChange(effectVol.value);
    }
    #endregion
    #region 비디오 설정
    // 전체 화면 설정
    public void OnFullscreen()
    {
        if(fullScreen.isOn)
        {
            Screen.fullScreen=true;
            isfull = true;

        }
        else if (!fullScreen.isOn)
        {
            Screen.fullScreen = false;
            isfull = false;
        }
    }
    //해상도 조절 
    public void OnRes()
    {
        if (resolution.value==0)
        {
            Screen.SetResolution(1280, 720, isfull);
        }
        else if (resolution.value == 1)
        {
            Screen.SetResolution(1920, 1080, isfull);
        }
        else if (resolution.value == 2)
        {
            Screen.SetResolution(2560, 1080, isfull);
        }
        else if (resolution.value == 3)
        {
            Screen.SetResolution(2560, 1440, isfull);
        }
    }
    public void OnFov()
    {
        //플레이어 플렙스로 저장하고 나중에 게임 카메라에 넣어버리자
        fovValve = fov.value;
        text_fov.text = fov.value.ToString();
    }
    #endregion
    #region 조작 설정
    public void OnMouseSens()
    {
        //플레이어 플렙스로 저장하고 나중에 게임 카메라에 넣어버리자
        mouseValve = mouseSen.value;
        text_MouseSen.text = mouseSen.value.ToString();
    }
    #endregion

}
