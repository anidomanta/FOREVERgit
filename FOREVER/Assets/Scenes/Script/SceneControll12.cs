using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class SceneControll12 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX;
    [SerializeField] float startPosY;
    [SerializeField] float goalPosY;

    public static int save11;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        LifeLimit.lifeLimit = 3;
        StoryManager.drink = SceneControll11.save10;
    }

    // Update is called once per frame
    void Update()
    {
        save11 = StoryManager.drink;
        if (boy.transform.position.y <= goalPosY)
        {
            SceneManager.LoadScene("Extra 2");
        }
    }
}
