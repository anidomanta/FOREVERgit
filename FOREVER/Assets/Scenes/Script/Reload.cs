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
            // Œ»İ‚ÌScene‚ğæ“¾
            Scene loadScene = SceneManager.GetActiveScene();
            // Œ»İ‚ÌƒV[ƒ“‚ğÄ“Ç‚İ‚İ‚·‚é
            SceneManager.LoadScene(loadScene.name); // Dont‚ÌBGM‚ªd•¡‚³‚ê‚é‹°‚ê‚ ‚è
        }
    }
}
