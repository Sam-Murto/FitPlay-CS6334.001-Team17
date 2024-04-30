using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyIdleState : EnemyBaseState
{
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Idle state");
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        Debug.Log("No Action in Idle state");
        Enemy.SwitchState(Enemy.AttackState);
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {

    }
}
