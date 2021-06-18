using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerFire : MonoBehaviourPun
{
    // ���콺 �� Ŭ���� �ϸ� �Ѿ��� �߻�ǰ� �ϰ� �ʹ�.
    // �ʿ� ���: �Ѿ� ������Ʈ, ��Ŭ�� �Է�, �߻� ��ġ
    public GameObject bullet;
    public Transform firePosition;
    public GameObject fireEffect;
    public int attackPower = 3;
    public Animator anim;
    ParticleSystem ps;

    public float knifeDistance = 1.5f;

    void Start()
    {

    }

    void Update()
    {
        // ����, ���콺 �� Ŭ���� �ϸ�...
        if (Input.GetButtonDown("Fire2"))
        {
           //
        }

        // ����, ���콺 �� Ŭ���� �ϸ�...
        if (Input.GetButtonDown("Fire1"))
        {
            // ���̸� �����ϰ� ī�޶��� ���� �������� �߻��ϰ� �ʹ�.

            // 1. ���̸� �����Ѵ�.
            Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

            // 2. ���̰� �ε��� ����� ������ ���� ������ �����Ѵ�.
            RaycastHit hitInfo;

            // �� �߻� �ִϸ��̼��� �÷����Ѵ�.
            //anim.SetTrigger("Fire");

            // 3. ���̸� �߻��Ѵ�!
            if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity))
            {

                // ������ ������ ����������
                if(knifeDistance > hitInfo.distance)
                {
                // �ε��� ����� �̸��� �ֿܼ� ����Ѵ�.
                    print(hitInfo.transform.name);
                    if (!photonView.IsMine && hitInfo.transform.tag == "Player" && hitInfo.transform.GetComponent<PhotonView>().IsMine)
                    {
                        hitInfo.transform.GetComponent<PlayerNetwork>().Hit();
                    }

                }

                // �ε��� ����� ��ġ�� ����Ʈ�� �����ϰ� ����Ʈ�� �����Ѵ�.
               // GameObject go = Instantiate(fireEffect);

                // ������ ����Ʈ�� ��ġ�� ���̰� ���� �������� �Ѵ�.
                //go.transform.position = hitInfo.point;

                // ������ ����Ʈ�� up ������ ���̰� ���� ������ ��� ���Ϳ� ��ġ��Ų��.
                //go.transform.up = hitInfo.normal;

                //ps = go.GetComponent<ParticleSystem>();
                //ps.Stop();
                //ps.Play();

                /*// ��� 1> �ε��� ����� enemy���, EnemyFSM ������Ʈ�� �����ͼ� Damaged �Լ��� �����Ѵ�.
                if (hitInfo.transform.name.Contains("Enemy"))
                {
                    EnemyFSM efsm = hitInfo.transform.GetComponent<EnemyFSM>();

                    if (efsm.eState != EnemyFSM.EnemyState.Damaged || efsm.eState != EnemyFSM.EnemyState.Die)
                    {
                        efsm.Damaged(attackPower);
                    }
                }*/
            }
        }
    }
}
