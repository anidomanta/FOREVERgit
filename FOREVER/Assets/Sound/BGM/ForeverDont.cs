using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForeverDont : MonoBehaviour
{
    [SerializeField] AudioSource ForeverBGM;

    private bool playing = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (ForeverBGM.isPlaying)
        {
            playing = true;
        }
        if (!ForeverBGM.isPlaying && playing)
        {
            ForeverBGM.time = 79.23f;
            ForeverBGM.Play();
        }
    }
    public void Forever()
    {
        ForeverBGM.Play();
        DontDestroyOnLoad(this);
    }
}
