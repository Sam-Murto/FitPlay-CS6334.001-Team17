using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovingState : EnemyBaseState
{
    float distance_player;
    float MoveSpeed = 2f;
    public override void EnterState(EnemyStateManager Enemy)
    {
        Debug.Log("Moving state");
    }
    public override void UpdateState(EnemyStateManager Enemy)
    {
        var Player = GameObject.Find("Body");
        distance_player = Vector3.Distance(Enemy.transform.position, Player.transform.position);

        if (distance_player > 3.0f)
        {
            Enemy.transform.position = Vector3.MoveTowards(Enemy.transform.position, 
            Player.transform.position, Time.deltaTime * MoveSpeed);
        }

        else if (distance_player <= 3.0f)
        {
            Enemy.SwitchState(Enemy.IdleState);
        }
        
    }
    public override void OnCollisionEnter(EnemyStateManager Enemy)
    {
        
    }
}
