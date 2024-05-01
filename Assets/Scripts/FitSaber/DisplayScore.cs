using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(TextMeshProUGUI))]
[RequireComponent(typeof(TrackScore))]
public class DisplayScore : MonoBehaviour
{
    TextMeshProUGUI text;
    TrackScore tracker;
    void OnEnable()
    {
        text = GetComponent<TextMeshProUGUI>();
        tracker = GetComponent<TrackScore>();
    }

    // Update is called once per frame
    void Update()
    {
        text.SetText("Score: " + tracker.score);
    }
}
