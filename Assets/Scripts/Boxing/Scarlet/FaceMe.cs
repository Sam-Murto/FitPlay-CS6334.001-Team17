using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceMe : MonoBehaviour
{
    public Transform player;
    public Transform boss;
    public float rotationSpeed = 1.0f;

    void Update()
    {
        // �����Boss����ҵķ�������
        Vector3 direction =  boss.position-player.position;
        direction.y = 0; // ��Y������Ϊ0����֤��תֻ��XZƽ����

        // ��������÷������ת
        Quaternion lookRotation = Quaternion.LookRotation(direction);

        // Ӧ����ת��Boss��Transform��
        boss.rotation = Quaternion.Slerp(boss.rotation, lookRotation, Time.deltaTime * rotationSpeed);
    }
}
