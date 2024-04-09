using UnityEngine;
using System.Collections;
public class PunchDamage : MonoBehaviour
{
    public HealthControl healthControl; // 引用HealthControl脚本
    public float damageFactor = 0.5f; // 伤害系数，可以根据需要调整

    public AudioClip impactSound; // 存储碰撞音效的AudioClip
    private AudioSource audioSource; // AudioSource组件的引用
    private bool canPlaySound = false;

    private void Start()
    {
        // 获取当前游戏对象上的AudioSource组件
        audioSource = GetComponent<AudioSource>();
        StartCoroutine(EnableSound());
    }
    private IEnumerator EnableSound()
    {
        yield return new WaitForSeconds(0.5f); // 等待一段时间确保场景完全加载
        canPlaySound = true; // 允许声音播放
    }
    // 当发生碰撞时调用
    private void OnCollisionEnter(Collision collision)
    {
        if (!canPlaySound) return;
        // 计算碰撞力度，这里简单使用相对速度的大小作为力度的估算
        float collisionForce = collision.relativeVelocity.magnitude;

        float damage = collisionForce * damageFactor; // 假设力度的十分之一转换为伤害值
        UnityEngine.Debug.Log("Damage: " + damage);
        // 扣血
        healthControl.UpdateHealth(-damage);
        if (impactSound != null && audioSource != null)
        {
            audioSource.PlayOneShot(impactSound);
        }
    }
}
