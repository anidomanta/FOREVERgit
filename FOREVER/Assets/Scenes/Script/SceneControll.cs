using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneControll : MonoBehaviour
{
    [SerializeField] GameObject boy;
    [SerializeField] float startPosX = -4.5f;
    [SerializeField] float startPosY = -2.95f;
    [SerializeField] float goalPosX = 9.3f;
    // Start is called before the first frame update
    void Start()
    {
        boy.transform.position = new Vector2(startPosX, startPosY);
    }

    // Update is called once per frame
    void Update()
    {
        if (boy.transform.position.x >= goalPosX)
        {
            SceneManager.LoadScene("Tutorial 1");
        }
    }
}
