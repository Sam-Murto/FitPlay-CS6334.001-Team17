using UnityEngine;
using System.Collections;
public class PunchDamage : MonoBehaviour
{
    public HealthControl healthControl; // ����HealthControl�ű�
    public float damageFactor = 0.5f; // �˺�ϵ�������Ը�����Ҫ����

    public AudioClip impactSound; // �洢��ײ��Ч��AudioClip
    private AudioSource audioSource; // AudioSource���������
    private bool canPlaySound = false;

    private void Start()
    {
        // ��ȡ��ǰ��Ϸ�����ϵ�AudioSource���
        audioSource = GetComponent<AudioSource>();
        StartCoroutine(EnableSound());
    }
    private IEnumerator EnableSound()
    {
        yield return new WaitForSeconds(0.5f); // �ȴ�һ��ʱ��ȷ��������ȫ����
        canPlaySound = true; // ������������
    }
    // ��������ײʱ����
    private void OnCollisionEnter(Collision collision)
    {
        if (!canPlaySound) return;
        // ������ײ���ȣ������ʹ������ٶȵĴ�С��Ϊ���ȵĹ���
        float collisionForce = collision.relativeVelocity.magnitude;

        float damage = collisionForce * damageFactor; // �������ȵ�ʮ��֮һת��Ϊ�˺�ֵ
        UnityEngine.Debug.Log("Damage: " + damage);
        // ��Ѫ
        healthControl.UpdateHealth(-damage);
        if (impactSound != null && audioSource != null)
        {
            audioSource.PlayOneShot(impactSound);
        }
    }
}
