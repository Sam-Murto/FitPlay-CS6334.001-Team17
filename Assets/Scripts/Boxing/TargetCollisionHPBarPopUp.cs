using UnityEngine;

public class TargetCollisionHPBarPopUp : MonoBehaviour
{
    // 与这个目标物体关联的Canvas
    public Canvas associatedCanvas; // The Canvas associated with this target object
    public Ducking ducking;

    private void Start()
    {
        // 确保开始时Canvas是禁用的
        // Ensure the Canvas is disabled at the start
        if (associatedCanvas != null)
        {
            associatedCanvas.enabled = false;
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        UnityEngine.Debug.Log("Collided with: " + other.gameObject.name);
        // 检查碰撞物体是否是玩家或玩家的一部分，这里可以根据标签或其他属性进行判断
        // Check if the colliding object is the player or a part of the player, this can be determined by tag or another property
        if (other.gameObject.CompareTag("Body") || other.gameObject.CompareTag("Fist"))
        {
            if (associatedCanvas != null)
            {
                UnityEngine.Debug.Log("Player has collided with the target!"); // 玩家已经与目标碰撞！
                // 启用关联的Canvas
                associatedCanvas.enabled = true; // Enable the associated Canvas
                ducking.target = this.gameObject.transform;
            }
        }
    }
}
