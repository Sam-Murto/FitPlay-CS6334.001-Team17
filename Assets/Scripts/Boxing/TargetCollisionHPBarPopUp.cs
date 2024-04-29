using UnityEngine;

public class TargetCollisionHPBarPopUp : MonoBehaviour
{
    // �����Ŀ�����������Canvas
    public Canvas associatedCanvas; // The Canvas associated with this target object
    public Ducking ducking;

    private void Start()
    {
        // ȷ����ʼʱCanvas�ǽ��õ�
        // Ensure the Canvas is disabled at the start
        if (associatedCanvas != null)
        {
            associatedCanvas.enabled = false;
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        UnityEngine.Debug.Log("Collided with: " + other.gameObject.name);
        // �����ײ�����Ƿ�����һ���ҵ�һ���֣�������Ը��ݱ�ǩ���������Խ����ж�
        // Check if the colliding object is the player or a part of the player, this can be determined by tag or another property
        if (other.gameObject.CompareTag("Body") || other.gameObject.CompareTag("Fist"))
        {
            if (associatedCanvas != null)
            {
                UnityEngine.Debug.Log("Player has collided with the target!"); // ����Ѿ���Ŀ����ײ��
                // ���ù�����Canvas
                associatedCanvas.enabled = true; // Enable the associated Canvas
                ducking.target = this.gameObject.transform;
            }
        }
    }
}
