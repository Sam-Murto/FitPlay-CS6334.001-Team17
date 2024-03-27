using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleObject : MonoBehaviour
{
   public void ToggleTargetObject(GameObject toggleTarget)
	{
		toggleTarget.SetActive(!toggleTarget.activeSelf);
	}
}
