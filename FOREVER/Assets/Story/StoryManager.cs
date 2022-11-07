using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryManager : MonoBehaviour
{
    public static int drink = 0;
    // Start is called before the first frame update
    void Start()
    {
        drink = 0;
    }

    // Update is called once per frame
    void Update()
    {
        DontDestroyOnLoad(this);
    }
}
