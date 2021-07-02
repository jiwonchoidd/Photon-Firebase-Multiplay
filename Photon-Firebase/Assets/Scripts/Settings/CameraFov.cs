using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class CameraFov : MonoBehaviour
{
    private CinemachineVirtualCamera cm;
    private void Start()
    {
        cm = GetComponent<CinemachineVirtualCamera>();
        if(PlayerPrefs.HasKey("fov"))
        {
            AdjustFov();
           /* print(PlayerPrefs.GetFloat("fov"));*/
        }
    }

    void AdjustFov()
    {
        cm.m_Lens.FieldOfView=PlayerPrefs.GetFloat("fov");
    }
}
