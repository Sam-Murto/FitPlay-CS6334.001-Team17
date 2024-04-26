using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static System.Net.Mime.MediaTypeNames;

public class PlayerHealth : MonoBehaviour
{
    public float maxHealth=100;
    public float currentHealth = 100;
    public UnityEngine.UI.Image healthImage;
    private bool isFlashing = false;
    private bool isInvincible = false;
    public BoxingMenu boxingMenu;

    // Start is called before the first frame update
    void Start()
    {
        currentHealth = maxHealth;
    }

    // Update is called once per frame
    void Update()
    {
        if(currentHealth <= 0)
        {
            PlayerDead();
        }
        if (currentHealth != null && healthImage != null)
        {
            if (currentHealth <= maxHealth * 0.2f && !isFlashing)
            {
                StartCoroutine(FlashRed());
            }
            if (currentHealth >= maxHealth * 0.2f && !isFlashing)
            {
                // 根据生命值计算透明度，生命值越低，透明度越低（颜色越深）
                float alpha = 0.4f * (1.0f - (currentHealth / maxHealth));
                healthImage.color = new Color(102, 0, 0, alpha);
            }
        }
        
    }
    IEnumerator FlashRed()
    {
        isFlashing = true;

        while (currentHealth <= maxHealth * 0.2f)
        {
            float minFlashDuration = 0.3f;  // 生命值最低时的最小闪烁间隔
            float maxFlashDuration = 0.6f;  // 生命值高于20%时的最大闪烁间隔
            float healthFraction = (currentHealth / (maxHealth * 0.2f));  // 生命值占最小阈值的比例

            // 使用线性插值计算当前的闪烁间隔
            float flashDuration = Mathf.Lerp(minFlashDuration, maxFlashDuration, healthFraction);

            healthImage.color = new Color(102, 0, 0, 0.32f); // More vivid red
            yield return new WaitForSeconds(flashDuration); // Wait for calculated time
            healthImage.color = new Color(102, 0, 0, 0); // Transparent
            yield return new WaitForSeconds(flashDuration); // Wait for calculated time
        }

        isFlashing = false;
    }
    public void AddHealth(float amount)
    {

            currentHealth += amount;
            if (currentHealth > maxHealth)
            {
                currentHealth = maxHealth;
            }
        
    }

    public void RemoveHealth(float amount)
    {
        if (!isInvincible)
        {
            currentHealth -= amount;
            if (currentHealth < 0)
            {
                currentHealth = 0;
            }
        }
    }
    public void PlayerDead()
    {
        boxingMenu.showGameOver();
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
}
