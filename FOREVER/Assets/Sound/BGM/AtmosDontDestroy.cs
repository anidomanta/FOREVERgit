using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AtmosDontDestroy : MonoBehaviour
{
    [SerializeField] AudioSource BGM;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        DontDestroyOnLoad(this);
        BGM.transform.name = "LoopBGM";
        if (BGM.isPlaying)
        {
            GameObject bgmEmpty_1 = GameObject.Find("atmos01");
            Destroy(bgmEmpty_1);
        }
    }
}
