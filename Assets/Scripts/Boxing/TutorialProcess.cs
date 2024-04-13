using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Diagnostics;
using System.IO;
using UnityEngine.XR;


public class TutorialProcess : MonoBehaviour
{
    public Canvas tutorialCanvas;
    public TextMeshProUGUI tutorialText;
    public TextAsset tutorialTextAsset;
    private List<string> lines = new List<string>();
    private int currentLine = 0;
    // Start is called before the first frame update
    void Start()
    {
        tutorialCanvas.enabled=true;
        LoadStory(Application.streamingAssetsPath + "/StoryScripts/tutorial/tutorial.txt");
        ShowNextLine();
    }
    
    void Update()
    {
        // 简单示例：当玩家按下空格键时，显示下一行文本
        if (Input.GetButtonDown("Submit"))
        {
            ShowNextLine();
        }
    }
    void LoadStory(string filePath)
    {
        // 读取文件的所有行到列表中
        var contents = tutorialTextAsset.text;
        lines.AddRange(contents.Split("\n"[0]));
       

    }
    void ShowNextLine()
    {
        // 检查是否还有更多行要显示
        if (currentLine < lines.Count)
        {
            // 设置TMP文本为当前行的内容，并递增索引
            tutorialText.text = lines[currentLine++];
        }
        else
        {
            // 如果没有更多行，可以在这里处理故事结束的逻辑
            tutorialCanvas.enabled = false;
            UnityEngine.Debug.Log("Story ended.");
        }
    }
}
