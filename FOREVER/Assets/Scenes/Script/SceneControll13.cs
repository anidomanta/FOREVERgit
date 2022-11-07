using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class SceneControll13 : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX;
    [SerializeField] float startPosY;

    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
        LifeLimit.lifeLimit = 3;
        StoryManager.drink = SceneControll12.save11;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
