using UnityEngine;

public class PunchDamage : MonoBehaviour
{
    public HealthControl healthControl; // ����HealthControl�ű�
    public float damageFactor = 0.5f; // �˺�ϵ�������Ը�����Ҫ����

    // ��������ײʱ����
    private void OnCollisionEnter(Collision collision)
    {
        // ������ײ���ȣ������ʹ������ٶȵĴ�С��Ϊ���ȵĹ���
        float collisionForce = collision.relativeVelocity.magnitude;

        float damage = collisionForce * damageFactor; // �������ȵ�ʮ��֮һת��Ϊ�˺�ֵ
        UnityEngine.Debug.Log("Damage: " + damage);
        // ��Ѫ
        healthControl.UpdateHealth(-damage);

    }
}
