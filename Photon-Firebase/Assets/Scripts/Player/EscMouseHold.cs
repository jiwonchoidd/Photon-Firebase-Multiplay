using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EscMouseHold : MonoBehaviour
{
    private bool isEsc=false;
    //esc를 누르면 마우스 고정과 숨기기를 풀리게 하던가 해야겠음

    private void Start()
    {
        //숨기기 및 고정
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }
    void Update()
    {
        if(Input.GetButtonDown("Cancel"))
        {
            if(!isEsc)
            {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
            isEsc = true;
            }
            else if(isEsc)
            {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
            isEsc = false;
            }
        }
    }
}
