using UnityEngine;

public class EnemyAttackState : EnemyBaseState
{
    int random_state;
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Attack state");
        random_state = Random.Range(1,5);
        Debug.Log("State : " + random_state);
        if (random_state == 1)
        {
            Left_punch_low_activate(Enemy);
        }
        
        else if (random_state == 2)
        {
            Left_punch_high_activate(Enemy);
        }

        else if (random_state == 3)
        {
            Right_punch_low_activate(Enemy);
        }

        else if (random_state == 4)
        {
            Right_punch_high_activate(Enemy);
        }
        
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        if (random_state == 1)
        {
            Left_punch_low(Enemy);
        }
        
        else if (random_state == 2)
        {
            Left_punch_high(Enemy);
        }

        else if (random_state == 3)
        {
            Right_punch_low(Enemy);
        }

        else if (random_state == 4)
        {
            Right_punch_high(Enemy);
        }
        
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {
        
    }

    private void Left_punch_low_activate (EnemyStateManager Enemy)
    {
        var left_hand = Enemy.transform.GetChild(2).GetChild(1).gameObject;
        var left_hand_low_attack = left_hand.GetComponent<EnemyLeftPunch_low>();
        left_hand_low_attack.enabled = true;
    }

    private void Right_punch_low_activate (EnemyStateManager Enemy)
    {
        var right_hand = Enemy.transform.GetChild(2).GetChild(2).gameObject;
        var right_hand_low_attack = right_hand.GetComponent<EnemyRightPunch_low>();
        right_hand_low_attack.enabled = true;
    }

    private void Left_punch_high_activate (EnemyStateManager Enemy)
    {
        var left_hand = Enemy.transform.GetChild(2).GetChild(1).gameObject;
        var left_hand_high_attack = left_hand.GetComponent<EnemyLeftPunch_high>();
        left_hand_high_attack.enabled = true;
    }

    private void Right_punch_high_activate (EnemyStateManager Enemy)
    {
        var right_hand = Enemy.transform.GetChild(2).GetChild(2).gameObject;
        var right_hand_high_attack = right_hand.GetComponent<EnemyRightPunch_high>();
        right_hand_high_attack.enabled = true;
    }

    private void Left_punch_low (EnemyStateManager Enemy)
    {
        var left_hand = Enemy.transform.GetChild(2).GetChild(1).gameObject;
        var left_hand_low_attack = left_hand.GetComponent<EnemyLeftPunch_low>();

        if(left_hand_low_attack.enabled == false)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
    }

    private void Right_punch_low (EnemyStateManager Enemy)
    {
        var right_hand = Enemy.transform.GetChild(2).GetChild(2).gameObject;
        var right_hand_low_attack = right_hand.GetComponent<EnemyRightPunch_low>();

        if(right_hand_low_attack.enabled == false)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
    }

    private void Left_punch_high (EnemyStateManager Enemy)
    {
        var left_hand = Enemy.transform.GetChild(2).GetChild(1).gameObject;
        var left_hand_high_attack = left_hand.GetComponent<EnemyLeftPunch_high>();

        if(left_hand_high_attack.enabled == false)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
    }

    private void Right_punch_high (EnemyStateManager Enemy)
    {
        var right_hand = Enemy.transform.GetChild(2).GetChild(2).gameObject;
        var right_hand_high_attack = right_hand.GetComponent<EnemyRightPunch_high>();

        if(right_hand_high_attack.enabled == false)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
    }
}
