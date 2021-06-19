using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EscMouseHold : MonoBehaviour
{
    public GameObject panel_Esc;
    //esc를 누르면 마우스 고정과 숨기기를 풀리게 하던가 해야겠음

    private void Start()
    {
        //숨기기 및 고정
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

        panel_Esc.SetActive(false);
    }

    public void OnclickContinue()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        panel_Esc.SetActive(false);
    }

    void Update()
    {
        if (!GameManager.instance.ISDEAD)
        {

            if (Input.GetButtonDown("Cancel"))
            {
               
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                   
                    panel_Esc.SetActive(true);
             
            }


        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }    
    }
}
