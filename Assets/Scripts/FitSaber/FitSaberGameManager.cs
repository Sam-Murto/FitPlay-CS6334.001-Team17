using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FitSaberGameManager : MonoBehaviour
{
    [SerializeField]
    public UnityEvent<Obstacle> onObstacleStruck;

    public static bool isPaused;
    bool isLevelLoaded = false;

    [SerializeField]
    ObstacleSpawner spawner;

    [SerializeField]
    FitSaberLevel level;

    List<GameObject> obstacles;
    [SerializeField]
    Transform obstacleListTransform;


    private void OnEnable()
    {
        isPaused = true;
        obstacles = new List<GameObject>();
        LoadLevel();
        isPaused = false;
    }

    private void OnDisable()
    {
        obstacles.Clear();
    }

    private void LoadLevel()
    {
        isLevelLoaded = false;

        foreach (FitSaberLevel.ObstacleSpawn spawn in level.obstacleSpawns)
        {
            GameObject obstacle = spawner.SpawnObstacle(level, spawn);
            obstacle.transform.parent = obstacleListTransform;
            obstacles.Add(obstacle);

        }

        isLevelLoaded = true;
    }

    public void OnObstacleDestroy(GameObject obstacle)
    {
        obstacles.Remove(obstacle);
        Destroy(obstacle);
    }




}
