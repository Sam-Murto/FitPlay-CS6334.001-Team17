using System.Collections;
using System.Collections.Generic;
using UnityEditor.Rendering;
using UnityEngine;

[CreateAssetMenu(fileName = "FitSaberLevel", menuName = "ScriptableObjects/FitSaberLevel")]
public class FitSaberLevel : ScriptableObject
{
    public string levelName;
    public float speed;
    public ObstacleSpawn[] obstacleSpawns;

    [System.Serializable]
    public class ObstacleSpawn
    {
        [SerializeField]
        public float timeToReachPlayer;
        [SerializeField]
        public Obstacle obstacleType;
        [SerializeField]
        public Vector2 offset;
        [SerializeField]
        public float rotation;

    }

}
