using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class SceneControll11 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX;
    [SerializeField] float startPosY;
    [SerializeField] float goalPosX;

    public static int save10;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        LifeLimit.lifeLimit = 3;
        StoryManager.drink = SceneControll9.save9;
    }

    // Update is called once per frame
    void Update()
    {
        save10 = StoryManager.drink;
        if (boy.transform.position.x <= goalPosX)
        {
            SceneManager.LoadScene("Extra 1");
        }
    }
}
