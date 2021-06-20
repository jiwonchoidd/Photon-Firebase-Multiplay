using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerFire : MonoBehaviourPun
{
    // 마우스 우 클릭을 하면 총알이 발사되게 하고 싶다.
    // 필요 요소: 총알 오브젝트, 우클릭 입력, 발사 위치
    public GameObject bullet;
    public Transform firePosition;
    public GameObject fireEffect;
    public int attackPower = 3;
    public Animator anim;
    ParticleSystem ps;
    public PhotonView PV;

    public float knifeDistance = 1.5f;

    void Start()
    {

    }

    void Update()
    {
        // 만일, 마우스 우 클릭을 하면...
        if (Input.GetButtonDown("Fire2"))
        {
           //
        }

        // 만일, 마우스 좌 클릭을 하면...
        if (Input.GetButtonDown("Fire1"))
        {
                PV.RPC("Attack", RpcTarget.All);
            
        }
    }

    [PunRPC]
    void Attack()
    {
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
                    hitInfo.transform.gameObject.GetComponent<PlayerNetwork>().Hit();
                }

            }

            // 부딪힌 대상의 위치에 이펙트를 생성하고 이펙트를 실행한다.
            // GameObject go = Instantiate(fireEffect);

            // 생성한 이펙트의 위치를 레이가 닿은 지점으로 한다.
            //go.transform.position = hitInfo.point;

            // 생성한 이펙트의 up 방향을 레이가 닿은 지점의 노멀 벡터와 일치시킨다.
            //go.transform.up = hitInfo.normal;

            //ps = go.GetComponent<ParticleSystem>();
            //ps.Stop();
            //ps.Play();

            /*// 방법 1> 부딪힌 대상이 enemy라면, EnemyFSM 컴포넌트를 가져와서 Damaged 함수를 실행한다.
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
