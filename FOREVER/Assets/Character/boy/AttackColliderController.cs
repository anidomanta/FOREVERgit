using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackColliderController : MonoBehaviour
{
    [SerializeField] GameObject attackColliderR;
    [SerializeField] GameObject attackColliderL;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void Update()
    {
        if (GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            SendMessage("ColliderOff");
        }
    }

    // Update is called once per frame

    public void ColliderOn()
    {
        if (BoyWalkAnim.direction)
        {
            //UŒ‚‚Ì“–‚½‚è”»’è‚ğ•t‚¯‚é
            attackColliderR.GetComponent<BoxCollider2D>().enabled = true;
        }
        else
        {
            attackColliderL.GetComponent<BoxCollider2D>().enabled = true;
        }
    }
}
