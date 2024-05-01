using UnityEngine;
using System.Collections;

public class AutoStandUp : MonoBehaviour
{
    public float standUpSpeed = 10f;  // 站立速度，可以调整
    private Rigidbody rb;
    private Quaternion targetRotation;  // 目标旋转
    public bool isStandingUp = false;
    public bool isDeath = false;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnCollisionEnter(Collision collision)
    {
            // 检查碰撞物体的标签是否是"Body"或"Fist"
            if ((collision.collider.tag == "Body" || collision.collider.tag == "Fist") && !isStandingUp)
            {
                StartCoroutine(StandUpRoutine());
            }
    }

    private IEnumerator StandUpRoutine()
    {
        isStandingUp = true;
        // 等待一段时间，然后开始站立动作
        yield return new WaitForSeconds(3f);  // 等待3秒后开始站立
        if (isDeath ) {
            isStandingUp = false;
            yield break; }
        Vector3 targetDirection = new Vector3(0, transform.eulerAngles.y, 0);  // 保留当前的 Y 轴旋转
        Quaternion fromRotation = transform.rotation;
        Quaternion toRotation = Quaternion.Euler(targetDirection);
        rb.velocity = Vector3.zero;  // 重置线性速度
        rb.angularVelocity = Vector3.zero;  // 重置角速度
        rb.Sleep();  // 使Rigidbody进入休眠状态，停止所有物理计算
        rb.WakeUp();  // 立即唤醒Rigidbody，保持无外力影响的状态
        UnityEngine.Debug.Log("这是一个控制台消息！");
        while (Quaternion.Angle(fromRotation, toRotation) > 0.1f)
        {
            // 慢慢旋转到目标旋转
            transform.rotation = Quaternion.Slerp(fromRotation, toRotation, Time.deltaTime * standUpSpeed);
            fromRotation = transform.rotation;
            yield return null;
        }
        isStandingUp = false;
        UnityEngine.Debug.Log("站立完成！");
        rb.Sleep();  // 使Rigidbody进入休眠状态，停止所有物理计算
        rb.WakeUp();  // 立即唤醒Rigidbody，保持无外力影响的状态
    }
}
      