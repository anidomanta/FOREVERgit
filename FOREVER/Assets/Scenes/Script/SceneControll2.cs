using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class SceneControll2 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX = -8.39f;
    [SerializeField] float startPosY = -3.968f;
    [SerializeField] float goalPosX = 9.3f;

    [SerializeField] TextMeshProUGUI[] drinkNum;
    [SerializeField] Image drinkPanel;
    private int remain1;
    public static int save1;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        LifeLimit.lifeLimit = 0;
        StoryManager.drink = SceneControll1.save;
    }

    // Update is called once per frame
    void Update()
    {
        save1 = StoryManager.drink;
        if (boy.transform.position.x >= goalPosX)
        {
            SceneManager.LoadScene("Tutorial 3");
        }
        if (LifeLimit.replay)
        {
            drinkPanel.enabled = true;
            for (int r = 0; r <= 3; r++)
            {
                drinkNum[r].enabled = true;
            }
            remain1 = 10 - StoryManager.drink;
            drinkNum[1].text = remain1.ToString();
        }
    }
}
