using UnityEngine;
using Photon.Pun;
using System;
using System.Collections;

namespace StarterAssets
{
    public class PlayerFire : MonoBehaviourPun
    {


        // ���콺 �� Ŭ���� �ϸ� �Ѿ��� �߻�ǰ� �ϰ� �ʹ�.
        // �ʿ� ���: �Ѿ� ������Ʈ, ��Ŭ�� �Է�, �߻� ��ġ

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
            //����
            if (PV.IsMine)
            { 
                // ����, ���콺 �� Ŭ���� �ϸ�...
                if (_input.fire)
                {
                    anim.SetTrigger("Attack");
                    // ���̸� �����ϰ� ī�޶��� ���� �������� �߻��ϰ� �ʹ�.
                    Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

                    // 2. ���̰� �ε��� ����� ������ ���� ������ �����Ѵ�.
                    RaycastHit hitInfo;

                    // �� �߻� �ִϸ��̼��� �÷����Ѵ�.
                    //anim.SetTrigger("Fire");

                    // 3. ���̸� �߻��Ѵ�!
                    if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity))
                    {
                        // ������ ������ ����������
                        if (knifeDistance > hitInfo.distance)
                        {
                            // �ε��� ����� �̸��� �ֿܼ� ����Ѵ�.
                            print(hitInfo.transform.name);
                            if (hitInfo.transform.gameObject.tag == "Player")
                            {
                                Debug.Log("���� ����");
                                //hitInfo.transform.gameObject.GetComponent<PlayerNetwork>().Hit();
                                //ShowEffect(hitInfo.point, hitInfo.normal);

                                // ��� ������� showeffect�Լ��� ȣ��ǵ��� �ؾ���
                                PV.RPC("ShowEffect", RpcTarget.All, hitInfo.point, hitInfo.normal);

                                //�ٸ� �༮�� �ǰݴ�������
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
            //hp ����
            this.GetComponent<PlayerNetwork>().HP -= value;

            this.GetComponent<PlayerNetwork>().AddImpact(dir, 15);
        }

    }
        
}