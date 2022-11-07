using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
using TMPro;

public class SceneControll10 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX;
    [SerializeField] float startPosY;

    [SerializeField] TextMeshProUGUI[] drinkNum;
    [SerializeField] Image drinkPanel;
    private int remain3;
    public static int save3;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        LifeLimit.lifeLimit = 0;
        StoryManager.drink = SceneControll3.save2;
    }

    // Update is called once per frame
    void Update()
    {
        save3 = StoryManager.drink;
        if (LifeLimit.replay)
        {
            drinkPanel.enabled = true;
            for (int r = 0; r <= 3; r++)
            {
                drinkNum[r].enabled = true;
            }
            remain3 = 10 - StoryManager.drink;
            drinkNum[1].text = remain3.ToString();
        }
    }
}
