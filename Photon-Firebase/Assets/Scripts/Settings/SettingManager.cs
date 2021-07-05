using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SettingManager : MonoBehaviour
{
    // �÷��̾� �������� ���� ���� ���ϴٱ�!
    // �����(����, ȿ����)
    [Header("Audio")]
    public Slider bgmVol;
    public Slider effectVol;
    //����(�ػ�,FOV,�׸��� ����)
    [Header("Video")]
    public Toggle fullScreen;
    public Dropdown resolution;
    public Slider fov;
    public Text text_fov;
    bool isfull;
    float fovValve;
    [Header("Control")]
    //���콺(���콺 ����)
    public Slider mouseSen;
    public Text text_MouseSen;
    float mouseValve;
    //�г�
    public GameObject panelSetting;
    void Start()
    {
        //ȭ�� �Ȳ�����
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        panelSetting.SetActive(false);
        HasKey();
        LoadSetting();
    }

    #region ���� �ε�
    public void SaveSetting()
    {
        //�����
        PlayerPrefs.SetFloat("bgmvol",bgmVol.value);
        PlayerPrefs.SetFloat("effectvol", effectVol.value);
        //����
        PlayerPrefs.SetInt("fullscreen", isfull? 1 : 0);
        PlayerPrefs.SetInt("resolution", resolution.value);
        PlayerPrefs.SetFloat("fov", fov.value);
        //����
        PlayerPrefs.SetFloat("mousesen", mouseSen.value);

        PlayerPrefs.Save();
    }
    public void LoadSetting()
    {
        //ó���̳� ����Ҷ� �ε�
        //�����
        bgmVol.value = PlayerPrefs.GetFloat("bgmvol");
        effectVol.value = PlayerPrefs.GetFloat("effectvol");
        OnBGMChange();
        //����
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
        //����
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

    #region ����� ����
    public void OnBGMChange()
    {
        BGM.Instance.VolChange(bgmVol.value);
    }
    public void OnEffectChange()
    {
        SFX.Instance.VolChange(effectVol.value);
    }
    #endregion
    #region ���� ����
    // ��ü ȭ�� ����
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
    //�ػ� ���� 
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
        //�÷��̾� �÷����� �����ϰ� ���߿� ���� ī�޶� �־������
        fovValve = fov.value;
        text_fov.text = fov.value.ToString();
    }
    #endregion
    #region ���� ����
    public void OnMouseSens()
    {
        //�÷��̾� �÷����� �����ϰ� ���߿� ���� ī�޶� �־������
        mouseValve = mouseSen.value;
        text_MouseSen.text = mouseSen.value.ToString();
    }
    #endregion

}
