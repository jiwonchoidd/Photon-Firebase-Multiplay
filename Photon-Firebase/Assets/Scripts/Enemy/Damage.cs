using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Damage : MonoBehaviour
{
    EnemyFSM efsm;
    private void Start()
    {
        // �θ� ���� ������Ʈ�κ��� EnemyFSM ������Ʈ�� �����´�.
        efsm = GetComponent<EnemyFSM>();
    }

    // ������ ���� ���ݷ��� ���� ���� �������� ���濡�� ������ �ʹ�.
    public void OnEnemyAttack(float damageRate)
    {
        // EnemyFSM Ŭ�������� �÷��̾ �����´�.
        Transform enemyTarget = efsm.GetTargetTransform();

        PlayerMove pm = enemyTarget.GetComponent<PlayerMove>();

        int finalDamage = (int)(efsm.attackPower * damageRate);

        pm.ApplyDamage(finalDamage);
        //print("�÷��̾�� " + finalDamage.ToString() + "�� ���ظ� �Ծ����ϴ�!");
    }
}
