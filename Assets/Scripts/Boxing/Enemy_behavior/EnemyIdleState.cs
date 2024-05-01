using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyIdleState : EnemyBaseState
{
    float attack_cooldown = 2f;
    float timer_attack;
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Idle state");
        timer_attack = attack_cooldown;
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
