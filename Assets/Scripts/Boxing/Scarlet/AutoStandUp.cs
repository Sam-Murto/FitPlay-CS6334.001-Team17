using UnityEngine;
using System.Collections;

public class AutoStandUp : MonoBehaviour
{
    public float standUpSpeed = 10f;  // վ���ٶȣ����Ե���
    private Rigidbody rb;
    private Quaternion targetRotation;  // Ŀ����ת
    private bool isStandingUp = false;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        // �����ײ����ı�ǩ�Ƿ���"Body"��"Fist"
        if ((collision.collider.tag == "Body" || collision.collider.tag == "Fist") && !isStandingUp)
        {
            StartCoroutine(StandUpRoutine());
        }
    }

    private IEnumerator StandUpRoutine()
    {
        isStandingUp = true;
        // �ȴ�һ��ʱ�䣬Ȼ��ʼվ������
        yield return new WaitForSeconds(3f);  // �ȴ�1���ʼվ��
        Vector3 targetDirection = new Vector3(0, transform.eulerAngles.y, 0);  // ������ǰ�� Y ����ת
        Quaternion fromRotation = transform.rotation;
        Quaternion toRotation = Quaternion.Euler(targetDirection);
        rb.velocity = Vector3.zero;  // ���������ٶ�
        rb.angularVelocity = Vector3.zero;  // ���ý��ٶ�
        UnityEngine.Debug.Log("����һ������̨��Ϣ��");
        while (Quaternion.Angle(fromRotation, toRotation) > 0.1f)
        {
            // ������ת��Ŀ����ת
            transform.rotation = Quaternion.Slerp(fromRotation, toRotation, Time.deltaTime * standUpSpeed);
            fromRotation = transform.rotation;
            yield return null;
        }
        isStandingUp = false;
        UnityEngine.Debug.Log("վ����ɣ�");
    }
}
