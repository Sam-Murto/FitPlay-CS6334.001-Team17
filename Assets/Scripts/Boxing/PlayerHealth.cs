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
                // ��������ֵ����͸���ȣ�����ֵԽ�ͣ�͸����Խ�ͣ���ɫԽ�
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
            float minFlashDuration = 0.3f;  // ����ֵ���ʱ����С��˸���
            float maxFlashDuration = 0.6f;  // ����ֵ����20%ʱ�������˸���
            float healthFraction = (currentHealth / (maxHealth * 0.2f));  // ����ֵռ��С��ֵ�ı���

            // ʹ�����Բ�ֵ���㵱ǰ����˸���
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
