using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FitSaberGameManager : MonoBehaviour
{
    [SerializeField]
    public UnityEvent<Strikeable> onObstacleStruck;

    [SerializeField]
    public UnityEvent<Strikeable> onStrikableReachDeathZone;
    [SerializeField]
    public UnityEvent<DamagePlayer> onDamagePlayerReachDeathZone;
    [SerializeField]
    public UnityEvent<DamagePlayer> onDamagePlayerHitPlayer;

    public static bool isPaused;
    bool levelOver = false;

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


    private void OnEnable()
    {
        obstacles = new List<GameObject>();
        LoadLevel();
    }

    private void OnDisable()
    {
        obstacles.Clear();
    }

    private void LoadLevel()
    {
        isPaused = true;

        foreach (FitSaberLevel.ObstacleSpawn spawn in level.obstacleSpawns)
        {
            GameObject obstacle = spawner.SpawnObstacle(level, spawn);
            obstacle.transform.parent = obstacleListTransform;
            obstacles.Add(obstacle);

        }
        levelOver = false;
        isPaused = false;
    }

    public void OnStrikableStruck(Strikeable obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        Instantiate(strikeParticleEffect, obstacleObject.transform.position, Quaternion.identity);
        obstacles.Remove(obstacleObject);
        Destroy(obstacleObject);

        score += 100;

    }

    public void OnStrikableReachDeathZone(Strikeable obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        obstacles.Remove(obstacleObject);
        Destroy(obstacleObject);

        score -= 50;

    }

    public void OnDamagePlayerReachDeathZone(DamagePlayer obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        obstacles.Remove(obstacleObject);
        Destroy(obstacleObject);
    }

    public void OnDamagePlayerHitPlayer(DamagePlayer obstacle)
    {
        GameObject obstacleObject = obstacle.gameObject;
        Instantiate(strikeParticleEffect, obstacleObject.transform.position, Quaternion.identity);
        obstacles.Remove(obstacleObject);
        Destroy(obstacleObject);

        score -= 50;

    }

    private void Update()
    {
        //Loop level when over
        if (levelOver)
        {
            LoadLevel();

        }

        if(obstacles.Count == 0)
        {
            levelOver = true;
        }

    }



}
