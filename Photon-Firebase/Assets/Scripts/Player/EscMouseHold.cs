using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


    public class EscMouseHold : MonoBehaviour
    {
        public GameObject panel_Esc;
 
        //esc�� ������ ���콺 ������ ����⸦ Ǯ���� �ϴ��� �ؾ߰���
        private void Start()
        {

        //����� �� ����
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        panel_Esc.SetActive(false);
        }

        void Update()
        {

            if (Input.GetButtonDown("Cancel"))
            {     
                panel_Esc.SetActive(true);
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
            }

        }
        public void btn()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        StarterAssets.StarterAssetsInputs.instance.cancel = false;
    }
    }


    

