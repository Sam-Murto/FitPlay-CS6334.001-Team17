using UnityEngine;

public class PopUpHPBar : MonoBehaviour
{
    public GameObject targetObject;
    public Canvas targetCanvas;

    private void Awake()
    {
        if (targetCanvas != null)
        {
            targetCanvas.enabled = false;
        }
    }

    public void EnableCanvas()
    {
        if (targetCanvas != null)
        {
            targetCanvas.enabled = true;
        }
    }
}
