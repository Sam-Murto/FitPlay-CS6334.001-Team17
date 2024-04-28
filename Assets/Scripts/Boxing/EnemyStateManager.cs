using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStateManager : MonoBehaviour
{
    EnemyBaseState currentState;
    public EnemyIdleState IdleState = new EnemyIdleState();
    public EnemyMovingState MovingState = new EnemyMovingState();
    public EnemyAttackState AttackState = new EnemyAttackState();
    public EnemyDefenseState DefenseState = new EnemyDefenseState();

    // Start is called before the first frame update
    void Start()
    {
        currentState = IdleState;

        currentState.EnterState(this);
    }

    // Update is called once per frame
    void Update()
    {
        currentState.UpdateState(this);
    }

    public void SwitchState(EnemyBaseState state) 
    {
        currentState = state;
        state.EnterState(this);
    }
}
