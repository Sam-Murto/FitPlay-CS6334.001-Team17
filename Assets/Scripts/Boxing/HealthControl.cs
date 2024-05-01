using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class HealthControl : MonoBehaviour
{
    public Slider healthBarSlider; // 在Inspector中指定的Slider组件
    public float currentHealth; // 当前生命值
    public float maxHealth = 1000f; // 最大生命值，可以根据需要调整
    private bool isDead = false;
    public AutoStandUp autoStandUp;
    private bool isInvincible;
    // Start is called before the first frame update
    void Start()
    {
        // 初始化时设置血条的最大值和当前值
        healthBarSlider.maxValue = maxHealth;
        healthBarSlider.value = currentHealth;
    }

    public void UpdateHealth(float healthChange)
    {
        if(isInvincible)
        {
            return;
        }
        currentHealth += healthChange;
        currentHealth = Mathf.Clamp(currentHealth, 0, maxHealth); // 限制生命值在0到最大生命值之间
        healthBarSlider.value = currentHealth; // 更新Slider的值显示新的生命值
        UnityEngine.Debug.Log("Current Health: " + currentHealth);
    }
    void Update()
    {
        healthBarSlider.value = currentHealth;
        if (currentHealth <= 0 && isDead == false)
        {
            isDead = true;
            // 调用Boss的死亡方法
            autoStandUp.isDeath = true;
            IDeath death = GetComponent<IDeath>();
            if (death != null)
            {
                death.OnDeath();
            }
        }
    }
    public void Invincible(float duration)
    {
        StartCoroutine(BecomeInvincible(duration));
    }

    IEnumerator BecomeInvincible(float duration)
    {
        isInvincible = true;
        yield return new WaitForSeconds(duration);
        isInvincible = false;
    }
    public void KeepInvincible()
    { isInvincible = true; }
    public void CancelInvincible()
    {
        isInvincible = false;
    }
}
