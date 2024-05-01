using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyIdleState : EnemyBaseState
{
    float distance_player;
    float attack_cooldown = 1f;
    float move_cooldown = 0.5f;
    float defense_cooldown = 0.1f;
    float timer_attack, timer_move, timer_defense;
    float attack_probability;
    public override void EnterState(EnemyStateManager Enemy)
    {
        var Player = GameObject.Find("Body");

        Debug.Log("Idle state");

        distance_player = Vector3.Distance(Enemy.transform.position, Player.transform.position);

        Debug.Log("Distance: " + distance_player);

        attack_probability = Random.Range(0.0f, 1.0f);

        timer_attack = attack_cooldown;
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        if(timer_attack > 0)
        {
            timer_attack -= Time.deltaTime;
        }

        if(timer_move > 0)
        {
            timer_move -= Time.deltaTime;
        }

        if(timer_defense > 0)
        {
            timer_defense -= Time.deltaTime;
        }

        if(timer_attack <= 0 && distance_player <= 2.0f)
        {
            if(attack_probability > 0.2)
            {
                Enemy.SwitchState(Enemy.AttackState);
            }

            else
            {
                Enemy.SwitchState(Enemy.IdleState);
            }
        }

        if(timer_move <= 0 && distance_player > 2.0f)
        {
            Enemy.SwitchState(Enemy.MovingState);
        }
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {

    }
}
