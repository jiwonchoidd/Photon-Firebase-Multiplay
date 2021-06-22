using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


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


    

