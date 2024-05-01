using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;

public class FitSaberGameManager : MonoBehaviour
{
    // Game Events
    [SerializeField]
    public UnityEvent<Strikeable> onObstacleStruck;
    [SerializeField]
    public UnityEvent<Strikeable> onStrikableReachDeathZone;
    [SerializeField]
    public UnityEvent<DamagePlayer> onDamagePlayerReachDeathZone;
    [SerializeField]
    public UnityEvent<DamagePlayer> onDamagePlayerHitPlayer;
    [SerializeField]
    public UnityEvent<Bomb> onBombReachDeathZone;
    [SerializeField]
    public UnityEvent<Bomb> onBombExplode;
    // System Control Events
    [SerializeField]
    public UnityEvent<TutorialPanel> onTutorialFinished;

    public int score { get; private set; }

    [SerializeField]
    ObstacleSpawner spawner;

    [SerializeField]
    FitSaberLevel level;

    List<GameObject> obstacles;
    [SerializeField]
    Transform obstacleListTransform;

    [SerializeField]
    ParticleSystem strikeParticleEffect;

    [SerializeField]
    GameObject tutorialDisplay;

    [SerializeField]
    GameObject levelCompleteMenu;

    [SerializeField]
    GameObject inGameOverlay;

    [SerializeField]
    InputActionReference menuReference;

    [SerializeField]
    GameObject player;

    [SerializeField]
    Vector3 spawnLocation;

    [SerializeField]
    Transform pauseSpawn;

    [SerializeField]
    Transform levelOverSpawn;

    Vector3 savedPlayerPosition;




    private void OnEnable()
    {
        menuReference.action.started += PauseGame;
        obstacles = new List<GameObject>();
        player.gameObject.transform.position = spawnLocation;
        DisplayTutorial();
    }

    private void OnDisable()
    {
        obstacles.Clear();
    }

    private void DisplayTutorial()
    {
        GameState.isPaused = true;
        tutorialDisplay.SetActive(true);
    }

    private void LoadLevel()
    {
        GameState.isLoading = true;

        foreach (FitSaberLevel.ObstacleSpawn spawn in level.obstacleSpawns)
        {
            GameObject obstacle = spawner.SpawnObstacle(level, spawn);
            obstacle.transform.parent = obstacleListTransform;
            obstacles.Add(obstacle);

        }

        GameState.isLoading = false;
    }

    public void OnStrikableStruck(Strikeable obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;

        score += 100;

        Instantiate(strikeParticleEffect, obstacleObject.transform.position, Quaternion.identity);
        RemoveObstacle(obstacleObject);

    }

    public void OnStrikableReachDeathZone(Strikeable obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        score -= 50;
        RemoveObstacle(obstacleObject);



    }

    public void OnDamagePlayerReachDeathZone(DamagePlayer obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        RemoveObstacle(obstacleObject);
    }

    public void OnDamagePlayerHitPlayer(DamagePlayer obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;

        score -= 50;

        //Replace with getting hit effect (Won't want to end up destroying obstacle either, will want to remove collisions instead and spawn longer obstacles
        Instantiate(strikeParticleEffect, obstacleObject.transform.position, Quaternion.identity);
        RemoveObstacle(obstacleObject);
    }

    public void OnBombExplode(Bomb obstacle) 
    {
        GameObject obstacleObject = obstacle.gameObject;

        score -= 50;

        //Replace with bomb explosion effect
        Instantiate(strikeParticleEffect, obstacleObject.transform.position, Quaternion.identity);
        RemoveObstacle(obstacleObject);
    }

    public void OnBombReachDeathZone(Bomb obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        RemoveObstacle(obstacleObject);
    }

    public void BeginLevel()
    {
        inGameOverlay.SetActive(true);
        LoadLevel();
        GameState.isPaused = true;
    }

    private void RemoveObstacle(GameObject obstacle)
    {
        obstacles.Remove(obstacle);
        Destroy(obstacle);

        if(obstacles.Count == 0)
        {
            EndLevel();
        }

    }

    private void EndLevel()
    {
        menuReference.action.started -= PauseGame;

        player.transform.position = levelOverSpawn.position;

        inGameOverlay.SetActive(false);
    }
    public void RestartGame()
    {
        menuReference.action.started += PauseGame;
        inGameOverlay.SetActive(true);

        player.transform.position = spawnLocation;

        LoadLevel();

    }

    public void EndTutorial(TutorialPanel panel)
    {
        panel.gameObject.SetActive(false);
        LoadLevel();
        GameState.isPaused = false;
    }

    public void PauseGame(InputAction.CallbackContext context)
    {
        menuReference.action.started -= PauseGame;
        menuReference.action.started += UnpauseGame;

        savedPlayerPosition = player.transform.position;
        player.transform.position = pauseSpawn.position;
        GameState.isPaused = true;
    
}

    public void UnpauseGame()
    {
        menuReference.action.started -= UnpauseGame;
        menuReference.action.started += PauseGame;

        player.transform.position = savedPlayerPosition;
        GameState.isPaused = false;

    }

    public void UnpauseGame(InputAction.CallbackContext context)
    {
        menuReference.action.started -= UnpauseGame;
        menuReference.action.started += PauseGame;

        player.transform.position = savedPlayerPosition;
        GameState.isPaused = false;

        Time.timeScale = (GameState.isPaused) ? 0f : 1f;
    }

}
