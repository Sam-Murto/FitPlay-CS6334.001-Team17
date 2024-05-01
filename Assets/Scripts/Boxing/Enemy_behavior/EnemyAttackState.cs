using UnityEngine;

public class EnemyAttackState : EnemyBaseState
{
    bool movement_state;
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Attack state");
        var left_hand = Enemy.transform.GetChild(1).gameObject;
        var left_hand_attack = left_hand.GetComponent<EnemyLeftPunch_low>();
        left_hand_attack.enabled = true;
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        var left_hand = Enemy.transform.GetChild(1).gameObject;
        var left_hand_attack = left_hand.GetComponent<EnemyLeftPunch_low>();
        var left_hand_origin = Enemy.transform.GetChild(0).gameObject.transform;

        if(left_hand_attack.enabled == false)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {
        
    }
}
