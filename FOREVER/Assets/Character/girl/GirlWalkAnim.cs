using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GirlWalkAnim : MonoBehaviour
{
    private Animator animator;

    public float speed;
    private Rigidbody2D rbody2D;
    private bool direction = true; // true�̎��E�����Afalse�̎�������

    private float jumpForce = 350f;

    private bool grounded = true;
    private bool grounded1 = true;
    [SerializeField] LayerMask groundlayer;

    [SerializeField] GameObject shadow;

    // Use this for initialization
    void Start()
    {
        animator = GetComponent<Animator>();
        rbody2D = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void FixedUpdate() // verocity�̌v�Z�p
    {
        // �ڒn����p�̐�
        Vector3 left_SP = transform.position - Vector3.right * 0.3f;
        Vector3 right_SP = transform.position + Vector3.right * 0.3f;
        Vector3 EP = transform.position - Vector3.up * 0.1f;

        // verociry�ɂ��邱�Ƃŕǂւ̂߂荞�݂�h���A�ڐG������~�܂�悤�ɂ��Ă���
        rbody2D.velocity = new Vector2(
        Input.GetAxisRaw("Horizontal") * speed * Time.deltaTime,
       rbody2D.velocity.y);

        // ��サ����X�s�[�h������
        GameObject.Find("Boy").GetComponent<Rigidbody2D>().velocity = new Vector2(0, GameObject.Find("Boy").GetComponent<Rigidbody2D>().velocity.y);
    }

    void Update() // GetKey�ǂݍ��ޗp
    {
        GameObject.Find("Boy").GetComponent<BoyWalkAnim>().enabled = false;
        GameObject.Find("Boy").GetComponent<Animator>().enabled = false;

        GetComponent<SpriteRenderer>().sortingOrder = 4;
        // �ڒn���Ă��邩�ǂ����A�ڒn���Ă����true�A�����ł͂Ȃ��Ƃ���false��Ԃ�
        grounded = Physics2D.Linecast(transform.position - Vector3.right * 0.182f,
           transform.position - Vector3.right * 0.182f - transform.up / 20,
           groundlayer);
        grounded1 = Physics2D.Linecast(transform.position - Vector3.left * 0.252f,
           transform.position - Vector3.left * 0.252f - transform.up / 20,
           groundlayer);

        if ((Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)) && (grounded || grounded1))
        {
            this.rbody2D.AddForce(transform.up * jumpForce);
        }

        if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            animator.SetBool("right", true);
            animator.SetBool("idleR", false);
            animator.SetBool("idleL", false);
            animator.SetBool("left", false);
            direction = true;
        }

        if ((Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.D)))
        {
            animator.SetBool("idleR", true);
            animator.SetBool("idleL", false);
            animator.SetBool("right", false);
            animator.SetBool("left", false);
            direction = true;
        }

        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            animator.SetBool("left", true);
            animator.SetBool("idleL", false);
            animator.SetBool("idleR", false);
            animator.SetBool("right", false);
            direction = false;
        }

        if ((Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.A)))
        {
            animator.SetBool("idleL", true);
            animator.SetBool("idleR", false);
            animator.SetBool("left", false);
            animator.SetBool("right", false);
            direction = false;
        }

        if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
        {
            if (GameObject.Find("Boy"))
            {
                GetComponent<SpriteRenderer>().color = new Color(0.2f, 0.2f, 0.2f, 1f);
                GetComponent<SpriteRenderer>().sortingOrder = 3;
                GameObject.Find("Boy").GetComponent<BoyWalkAnim>().enabled = true;
                GameObject.Find("Boy").GetComponent<SpriteRenderer>().enabled = true;
                GameObject.Find("Boy").GetComponent<Animator>().enabled = true;
                shadow.GetComponent<SpriteRenderer>().enabled = false;
                this.enabled = false;
                GameObject.Find("Boy").GetComponent<LifeManager>().enabled = true;
                if (direction)
                {
                    animator.SetBool("idleR", true);
                    animator.SetBool("idleL", false);
                    animator.SetBool("right", false);
                    animator.SetBool("left", false);
                }
                else
                {
                    animator.SetBool("idleL", true);
                    animator.SetBool("idleR", false);
                    animator.SetBool("left", false);
                    animator.SetBool("right", false);
                }
            }
        }
    }
}

