using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyIdleState : EnemyBaseState
{
    float timer_attack = 2f;
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Idle state");
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        if(timer_attack > 0)
        {
            timer_attack -= Time.deltaTime;
        }
        else
        {
            Enemy.SwitchState(Enemy.AttackState);
        }
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {

    }
}
