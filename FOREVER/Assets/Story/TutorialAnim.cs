using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;


public class TutorialAnim : MonoBehaviour
{
    private float elapsedTime = 0f;
    private float alfa = 0f;
    private float alfa1 = 0f;
    [SerializeField] Light2D pointbrinklight;
    [SerializeField] Light2D[] pointbrinklight1;
    [SerializeField] GameObject boy;
    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = boy.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {

        elapsedTime += Time.deltaTime;

        if (elapsedTime >= 16.0f)
        {
            alfa += Time.deltaTime / 4;
            if (alfa <= 1.0f)
            {
                pointbrinklight.color = new Color(1f, 1f, 1f, alfa);
            }
        }

        if (elapsedTime >= 21.0f)
        {
            animator.SetBool("gettingup", true);
        }

        if (elapsedTime >= 23.0f)
        {
            animator.SetBool("normal", true);
        }

        if (elapsedTime >= 24.0f)
        {
            alfa1 += Time.deltaTime / 2;
            int[] arrowNum = { 0, 1, 2, 3, 4 };
            if (alfa1 <= 1.0f)
            {
                foreach (int i in arrowNum)
                {
                    pointbrinklight1[i].color = new Color(1f, 1f, 1f, alfa1);
                }
            }
            boy.GetComponent<BoyWalkAnim>().enabled = true;
        }
    }
}
