using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Reload : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            // 現在のSceneを取得
            Scene loadScene = SceneManager.GetActiveScene();
            // 現在のシーンを再読み込みする
            SceneManager.LoadScene(loadScene.name); // DontのBGMが重複される恐れあり
        }
    }
}
