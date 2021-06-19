using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EscMouseHold : MonoBehaviour
{
    private bool isEsc=false;
    public GameObject panel_Esc;
    //esc�� ������ ���콺 ������ ����⸦ Ǯ���� �ϴ��� �ؾ߰���

    private void Start()
    {
        //����� �� ����
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

        panel_Esc.SetActive(false);
    }

    public void OnclickContinue()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        isEsc = false;
        panel_Esc.SetActive(false);
    }

    void Update()
    {
        if (!GameManager.instance.ISDEAD)
        {

            if (Input.GetButtonDown("Cancel"))
            {
                if (!isEsc)
                {
                    Cursor.lockState = CursorLockMode.None;
                    Cursor.visible = true;
                    isEsc = true;
                    panel_Esc.SetActive(true);
                }
                else if (isEsc)
                {
                    Cursor.lockState = CursorLockMode.Locked;
                    Cursor.visible = false;
                    isEsc = false;
                    panel_Esc.SetActive(false);
                }
            }


        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }    
    }
}
