using UnityEngine;
using Photon.Pun;
using System;
using System.Collections;

namespace StarterAssets
{
    public class PlayerFire : MonoBehaviourPun
    {


        // 마우스 우 클릭을 하면 총알이 발사되게 하고 싶다.
        // 필요 요소: 총알 오브젝트, 우클릭 입력, 발사 위치

        public Transform firePosition;
        public int attackPower = 3;
        public Animator anim;
        public PhotonView PV;
        public GameObject effectFactory;

        
        public float knifeDistance = 1.5f;
        private StarterAssetsInputs _input;

        void Start()
        {
            _input = GetComponent<StarterAssetsInputs>();
            anim = GetComponent<Animator>();
        }

        void Update()
        {
            //공격
            if (PV.IsMine)
            { 
                // 만일, 마우스 좌 클릭을 하면...
                if (_input.fire)
                {
                    anim.SetTrigger("Attack");
                    // 레이를 생성하고 카메라의 정면 방향으로 발사하고 싶다.
                    Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

                    // 2. 레이가 부딪힌 대상의 정보를 담을 변수를 선언한다.
                    RaycastHit hitInfo;

                    // 총 발사 애니메이션을 플레이한다.
                    //anim.SetTrigger("Fire");

                    // 3. 레이를 발사한다!
                    if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity))
                    {
                        // 가능한 범위에 들어와있을때
                        if (knifeDistance > hitInfo.distance)
                        {
                            // 부딪힌 대상의 이름을 콘솔에 출력한다.
                            print(hitInfo.transform.name);
                            if (hitInfo.transform.gameObject.tag == "Player")
                            {
                                Debug.Log("공격 전송");
                                //hitInfo.transform.gameObject.GetComponent<PlayerNetwork>().Hit();
                                //ShowEffect(hitInfo.point, hitInfo.normal);

                                // 모든 사용자의 showeffect함수가 호출되도록 해야함
                                PV.RPC("ShowEffect", RpcTarget.All, hitInfo.point, hitInfo.normal);

                                //다른 녀석이 피격당했을때
                                PhotonView enemy = hitInfo.transform.GetComponent<PhotonView>();
                                if (enemy)
                                {
                                    enemy.RPC("Damage", RpcTarget.All, 0.1f , ray.direction);
                                }
                            }

                        }
                    }
                    _input.fire = false;
                }
            }

        }



        [PunRPC]
        private void ShowEffect(Vector3 point, Vector3 normal)
        {
            GameObject knifeEffect = Instantiate(effectFactory);
            knifeEffect.transform.position = point;
            knifeEffect.transform.forward = normal;
            Destroy(knifeEffect, 3);
        }

        [PunRPC]
        void Damage(float value, Vector3 dir)
        {
            //hp 감소
            this.GetComponent<PlayerNetwork>().HP -= value;

            this.GetComponent<PlayerNetwork>().AddImpact(dir, 15);
        }

    }
        
}