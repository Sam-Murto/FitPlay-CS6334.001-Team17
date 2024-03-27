using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
	public void ChangeScene(int sceneIndex)
	{
		SceneManager.LoadScene(0);
	}
}