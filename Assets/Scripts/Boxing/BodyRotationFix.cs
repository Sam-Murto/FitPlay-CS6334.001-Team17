using UnityEngine;

public class BodyRotationFix : MonoBehaviour
{
    private Quaternion initialRotation;

    void Start()
    {
        // ��¼��ʼ��ת
        initialRotation = transform.rotation;
    }

    void Update()
    {
        // ÿ֡����ʱ��������תΪ��ʼ��ת���������������ת
        transform.rotation = initialRotation;
    }
}
