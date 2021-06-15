using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Damage : MonoBehaviour
{
    EnemyFSM efsm;
    private void Start()
    {
        // 부모 게임 오브젝트로부터 EnemyFSM 컴포넌트를 가져온다.
        efsm = GetComponent<EnemyFSM>();
    }

    // 비율에 따라 공격력의 일정 비율 데미지를 상대방에게 입히고 싶다.
    public void OnEnemyAttack(float damageRate)
    {
        // EnemyFSM 클래스에서 플레이어를 가져온다.
        Transform enemyTarget = efsm.GetTargetTransform();

        PlayerMove pm = enemyTarget.GetComponent<PlayerMove>();

        int finalDamage = (int)(efsm.attackPower * damageRate);

        pm.ApplyDamage(finalDamage);
        //print("플레이어는 " + finalDamage.ToString() + "의 피해를 입었습니다!");
    }
}
