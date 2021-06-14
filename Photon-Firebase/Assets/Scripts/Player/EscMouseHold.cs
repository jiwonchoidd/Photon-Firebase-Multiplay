using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EscMouseHold : MonoBehaviour
{
    private bool isEsc=false;
    //esc�� ������ ���콺 ������ ����⸦ Ǯ���� �ϴ��� �ؾ߰���

    private void Start()
    {
        //����� �� ����
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
