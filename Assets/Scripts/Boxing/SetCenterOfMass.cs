using UnityEngine;

public class SetCenterOfMass : MonoBehaviour
{
    public Transform centerOfMassMarker; // ��Inspector��ָ���������Ϊ�������ı�ʶ����

    void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null && centerOfMassMarker != null)
        {
            // ����������Ϊ��ʶ����ľֲ�λ��
            rb.centerOfMass = rb.transform.InverseTransformPoint(centerOfMassMarker.position);
        }
    }
}
