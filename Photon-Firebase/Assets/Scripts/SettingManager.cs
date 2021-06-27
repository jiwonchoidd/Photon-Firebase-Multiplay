using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SettingManager : MonoBehaviour
{
    // 플레이어 프랩스를 쓰면 아주 편하다구!
    // 오디오
    public Slider BGMvol;
    public Slider Effectvol;
    // 마우스

    public GameObject panelSetting;
    void Start()
    {
        panelSetting.SetActive(false);


    }
    #region 오디오 설정
    #endregion
    #region 비디오 설정
    #endregion
    #region 조작 설정
    #endregion

}
