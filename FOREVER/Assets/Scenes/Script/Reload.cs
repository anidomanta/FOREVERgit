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
            // ���݂�Scene���擾
            Scene loadScene = SceneManager.GetActiveScene();
            // ���݂̃V�[�����ēǂݍ��݂���
            SceneManager.LoadScene(loadScene.name); // Dont��BGM���d������鋰�ꂠ��
        }
    }
}
