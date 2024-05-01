using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
	public void ChangeScene(int sceneIndex)
	{
		GameState.isPaused = false;
		Time.timeScale = 1.0f;
		SceneManager.LoadScene(sceneIndex);
	}
}