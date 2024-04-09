using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SandbagDeath : MonoBehaviour, IDeath
{
    public GameObject rope;
    public GameObject self;
    public void OnDeath()
    {
        foreach (Transform child in rope.transform)
        {
            Rigidbody rb = child.GetComponent<Rigidbody>();
            if (rb != null)
            {
                // ����useGravityΪfalse��ʹ�䲻������Ӱ��
                rb.useGravity = false;
            }
            HingeJoint hj = child.GetComponent<HingeJoint>();
            if (hj != null)
            {
                hj.breakForce = 0;
            }
        }
        // �������������
        self.GetComponent<Rigidbody>().useGravity = false;
        // ���������hingeJoint
        self.GetComponent<HingeJoint>().breakForce = 0;
        StartCoroutine(DestroyAfterDelay());
    }
    
    private IEnumerator DestroyAfterDelay()
    {
        // �ȴ�����
        yield return new WaitForSeconds(10);

        // ����rope��self
        Destroy(rope);
        Destroy(self);
    }
}
