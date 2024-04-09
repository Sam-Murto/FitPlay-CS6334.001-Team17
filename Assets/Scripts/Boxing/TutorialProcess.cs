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
    private List<string> lines = new List<string>();
    private int currentLine = 0;
    // Start is called before the first frame update
    void Start()
    {
        tutorialCanvas.enabled=true;
        LoadStory("Assets/Story Scripts/tutorial/tutorial.txt");
        ShowNextLine();
    }
    
    void Update()
    {
        // ��ʾ��������Ұ��¿ո��ʱ����ʾ��һ���ı�
        if (Input.GetButtonDown("Submit"))
        {
            ShowNextLine();
        }
    }
    void LoadStory(string filePath)
    {
        // ��ȡ�ļ��������е��б���
        lines = new List<string>(File.ReadAllLines(filePath));
    }
    void ShowNextLine()
    {
        // ����Ƿ��и�����Ҫ��ʾ
        if (currentLine < lines.Count)
        {
            // ����TMP�ı�Ϊ��ǰ�е����ݣ�����������
            tutorialText.text = lines[currentLine++];
        }
        else
        {
            // ���û�и����У����������ﴦ����½������߼�
            tutorialCanvas.enabled = false;
            UnityEngine.Debug.Log("Story ended.");
        }
    }
}
