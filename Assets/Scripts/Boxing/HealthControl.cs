using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class HealthControl : MonoBehaviour
{
    public Slider healthBarSlider; // ��Inspector��ָ����Slider���
    public float currentHealth; // ��ǰ����ֵ
    public float maxHealth = 1000f; // �������ֵ�����Ը�����Ҫ����
    // Start is called before the first frame update
    void Start()
    {
        // ��ʼ��ʱ����Ѫ�������ֵ�͵�ǰֵ
        healthBarSlider.maxValue = maxHealth;
        healthBarSlider.value = currentHealth;
    }

    public void UpdateHealth(float healthChange)
    {
        currentHealth += healthChange;
        currentHealth = Mathf.Clamp(currentHealth, 0, maxHealth); // ��������ֵ��0���������ֵ֮��
        healthBarSlider.value = currentHealth; // ����Slider��ֵ��ʾ�µ�����ֵ
        UnityEngine.Debug.Log("Current Health: " + currentHealth);
    }

}
