using UnityEngine;

public class PunchDamage : MonoBehaviour
{
    public HealthControl healthControl; // 引用HealthControl脚本
    public float damageFactor = 0.5f; // 伤害系数，可以根据需要调整

    // 当发生碰撞时调用
    private void OnCollisionEnter(Collision collision)
    {
        // 计算碰撞力度，这里简单使用相对速度的大小作为力度的估算
        float collisionForce = collision.relativeVelocity.magnitude;

        float damage = collisionForce * damageFactor; // 假设力度的十分之一转换为伤害值
        UnityEngine.Debug.Log("Damage: " + damage);
        // 扣血
        healthControl.UpdateHealth(-damage);

    }
}
