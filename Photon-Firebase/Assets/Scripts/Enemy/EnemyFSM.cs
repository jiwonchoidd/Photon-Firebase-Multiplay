using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFSM : MonoBehaviour
{
    public enum EnemyState
    {
        Idle,
        Move,
        Attack,
        AttackToMove,
        Damaged,
        Die
    }

    CharacterController cc;
    public EnemyState eState;

    public float sightRange = 5.0f;
    public float attackRange = 2.0f;
    public float moveSpeed = 9.0f;
    public int attackPower = 2;
    public float delayTime = 1.0f;

    Transform player;
    float rotRate = 0;
    Quaternion startRotation;
    float currentTime = 0;
    bool isBooked = false;
    int healthPoint = 100;
    Animator enemyAnim;
    bool playMoveAni = false;
    private void Start()
    {
        cc = transform.GetComponent<CharacterController>();
        player = GameObject.Find("Player").transform;
    }
    public Transform GetTargetTransform()
    {
        return player;
    }
    // Update is called once per frame
    void Update()
    {
        // 각 상태별 처리
        switch (eState)
        {
            case EnemyState.Idle:
                Idle();
                break;
            case EnemyState.Move:
                Move();
                break;
            case EnemyState.Attack:
                Attack();
                break;
            case EnemyState.Damaged:
                CheckClipTime();
                break;
            case EnemyState.Die:
                Die();
                break;
            default:
                break;
        }
    }

    private void Die()
    {
        // 만일, Die 애니메이션이 실행 중이고, 애니메이션 진행률이 1.0(100%)에 도달했을 때...
        AnimatorStateInfo myState = enemyAnim.GetCurrentAnimatorStateInfo(0);

        if (myState.IsName("Die State"))
        {
            enemyAnim.SetBool("isDie", false);

            if (myState.normalizedTime >= 1.0f)
            {
                // 자기 자신을 제거한다.
                Destroy(gameObject);
            }
        }
    }

    private void CheckClipTime()
    {
        // 피격 애니메이션 클립의 총 길이를 구한다.
        AnimatorStateInfo myStateInfo = enemyAnim.GetCurrentAnimatorStateInfo(0);
        //print("length: " + myStateInfo.length);

        // 만일, 현재 상태의 이름이 "Move State"라면...
        if (playMoveAni)
        {
            if (myStateInfo.IsName("Hit State"))
            {
                playMoveAni = false;
            }
        }
        else
        {
            if (myStateInfo.IsName("Move State"))
            {
                ReturnState();
                //print("length: " + myStateInfo.length);
            }
        }
    }

    void ReturnState()
    {
        eState = EnemyState.Move;
    }

    private void Attack()
    {
        currentTime += Time.deltaTime;

        // 만일, 플레이어가 공격 범위 이내라면...
        if (Vector3.Distance(player.position, transform.position) < attackRange)
        {
            // 매 1초마다 타겟의 체력을 나의 공격력만큼 감소시킨다.
            if (currentTime > delayTime)
            {
                currentTime = 0;
                //print("공격");
                enemyAnim.SetTrigger("DelayToAttack");
            }
        }
        // 공격 범위 밖이라면...
        else
        {
            if (!isBooked)
            {
                // 1.5초 뒤에 이동 상태로 전환한다.
                Invoke("SetMoveState", 1.5f);
                isBooked = true;
            }

            //Invoke("SetMoveState", 1.5f);
            eState = EnemyState.AttackToMove;
        }
    }

    private void Move()
    {
        // 만일, 플레이어와의 거리가 공격 범위 이내로 접근했다면 공격 상태로 전환한다.
        Vector3 dir = player.position - transform.position;
        float distance = dir.magnitude;

        if (distance <= attackRange)
        {
            eState = EnemyState.Attack;
            currentTime = 0;
            //CancelInvoke();

            enemyAnim.SetTrigger("MoveToAttack");

            return;
        }
    }

    private void Idle()
    {
        // 만일, 시야 범위에 플레이어가 있으면 이동 상태로 전환한다.
        // 필요 요소: 시야 범위, 플레이어와 나와의 거리, 플레이어
        float distance = (player.position - transform.position).magnitude;

        if (sightRange >= distance)
        {
            // 이동 상태로 전환한다.
            SetMoveState();
        }
    }
    void SetMoveState()
    {
        // 이동 상태로 전환한다.
        eState = EnemyState.Move;

        // 이동 애니메이션을 실행한다.
        enemyAnim.SetTrigger("IdleToMove");

        // 현재 회전 상태를 startRot로 저장한다.
        startRotation = transform.rotation;
        // 회전 보간을 위한 rotRate도 0으로 초기화한다.
        rotRate = 0;

        isBooked = false;
    }
}
