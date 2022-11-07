using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackEnd : MonoBehaviour
{
    [SerializeField] GameObject attackColliderR;
    [SerializeField] GameObject attackColliderL;
    [SerializeField] GameObject hissatsuColliderR;
    [SerializeField] GameObject hissatsuColliderL;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void ColliderOff()
    {
        if (BoyWalkAnim.direction)
        {
            GetComponent<Animator>().SetBool("left", false);
            GetComponent<Animator>().SetBool("idleL", false);
            if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
            {
                GetComponent<Animator>().SetBool("right", true);
                GetComponent<Animator>().SetBool("idleR", false);
            }
            else
            {
                GetComponent<Animator>().SetBool("idleR", true);
                GetComponent<Animator>().SetBool("right", false);
            }
        }
        else
        {
            GetComponent<Animator>().SetBool("idleL", true);
            GetComponent<Animator>().SetBool("idleR", false);
            GetComponent<Animator>().SetBool("right", false);
            GetComponent<Animator>().SetBool("left", false);
            if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
            {
                GetComponent<Animator>().SetBool("left", true);
                GetComponent<Animator>().SetBool("idleL", false);
            }
            else
            {
                GetComponent<Animator>().SetBool("idleL", true);
                GetComponent<Animator>().SetBool("left", false);
            }
        }
        GetComponent<BoyWalkAnim>().enabled = true;
        attackColliderR.GetComponent<BoxCollider2D>().enabled = false;
        attackColliderL.GetComponent<BoxCollider2D>().enabled = false;
        hissatsuColliderR.GetComponent<BoxCollider2D>().enabled = false;
        hissatsuColliderL.GetComponent<BoxCollider2D>().enabled = false;
        GetComponent<AttackColliderController1>().enabled = false;
        BoyWalkAnim.attack = false;
    }
}
