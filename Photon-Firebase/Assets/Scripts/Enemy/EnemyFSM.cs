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
        // �� ���º� ó��
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
        // ����, Die �ִϸ��̼��� ���� ���̰�, �ִϸ��̼� ������� 1.0(100%)�� �������� ��...
        AnimatorStateInfo myState = enemyAnim.GetCurrentAnimatorStateInfo(0);

        if (myState.IsName("Die State"))
        {
            enemyAnim.SetBool("isDie", false);

            if (myState.normalizedTime >= 1.0f)
            {
                // �ڱ� �ڽ��� �����Ѵ�.
                Destroy(gameObject);
            }
        }
    }

    private void CheckClipTime()
    {
        // �ǰ� �ִϸ��̼� Ŭ���� �� ���̸� ���Ѵ�.
        AnimatorStateInfo myStateInfo = enemyAnim.GetCurrentAnimatorStateInfo(0);
        //print("length: " + myStateInfo.length);

        // ����, ���� ������ �̸��� "Move State"���...
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

        // ����, �÷��̾ ���� ���� �̳����...
        if (Vector3.Distance(player.position, transform.position) < attackRange)
        {
            // �� 1�ʸ��� Ÿ���� ü���� ���� ���ݷ¸�ŭ ���ҽ�Ų��.
            if (currentTime > delayTime)
            {
                currentTime = 0;
                //print("����");
                enemyAnim.SetTrigger("DelayToAttack");
            }
        }
        // ���� ���� ���̶��...
        else
        {
            if (!isBooked)
            {
                // 1.5�� �ڿ� �̵� ���·� ��ȯ�Ѵ�.
                Invoke("SetMoveState", 1.5f);
                isBooked = true;
            }

            //Invoke("SetMoveState", 1.5f);
            eState = EnemyState.AttackToMove;
        }
    }

    private void Move()
    {
        // ����, �÷��̾���� �Ÿ��� ���� ���� �̳��� �����ߴٸ� ���� ���·� ��ȯ�Ѵ�.
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
        // ����, �þ� ������ �÷��̾ ������ �̵� ���·� ��ȯ�Ѵ�.
        // �ʿ� ���: �þ� ����, �÷��̾�� ������ �Ÿ�, �÷��̾�
        float distance = (player.position - transform.position).magnitude;

        if (sightRange >= distance)
        {
            // �̵� ���·� ��ȯ�Ѵ�.
            SetMoveState();
        }
    }
    void SetMoveState()
    {
        // �̵� ���·� ��ȯ�Ѵ�.
        eState = EnemyState.Move;

        // �̵� �ִϸ��̼��� �����Ѵ�.
        enemyAnim.SetTrigger("IdleToMove");

        // ���� ȸ�� ���¸� startRot�� �����Ѵ�.
        startRotation = transform.rotation;
        // ȸ�� ������ ���� rotRate�� 0���� �ʱ�ȭ�Ѵ�.
        rotRate = 0;

        isBooked = false;
    }
}
