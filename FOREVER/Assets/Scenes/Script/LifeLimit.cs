using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeLimit : MonoBehaviour
{
    public static int lifeLimit = 0;
    public static bool replay = false;
    public static int drink = 0;
    // Start is called before the first frame update
    void Start()
    {
        lifeLimit = 0;
        drink = 0;
    }

    // Update is called once per frame
    void Update()
    {
        // ŠeSceneControll‚É‚æ‚Á‚Ä‘€ì
        DontDestroyOnLoad(this);
    }
}
