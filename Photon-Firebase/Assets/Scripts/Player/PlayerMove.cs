using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    [Header("�̵�")]
    // �ʿ� ��� �ӷ� ���� ������� �Է�
    public float walkSpeed = 3.5f;
    public float runSpeed = 7.0f;
    float moveSpeed = 0;

    [Header("����")]
    public float jumpPower = 30.0f;
    public int jumpCount = 2;
    public float gravity = -20.0f;
    float yVelocity = 0;

    [Header("�� ��")]
    CharacterController cc;
    bool isjumping = false;
    public int healthPoint = 100;

    void Start()
    {
        cc = transform.GetComponent<CharacterController>();
    }

    public void ApplyDamage(int val)
    {
        healthPoint -= val;
        healthPoint = Mathf.Max(healthPoint, 0);

        print("���� ü��: " + healthPoint);
    }

    private void LateUpdate()
    {
        // ������� �Է��� �޴´�.
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        // ������ �����Ѵ�.
        Vector3 dir = new Vector3(h, 0, v);
        dir.Normalize();

        // ���� ���͸� ī�޶��� ������ �������� �����Ѵ�.
        dir = Camera.main.transform.TransformDirection(dir);

        // ���� ������� ���� Ƚ���� �ʱ�ȭ�Ѵ�.
        if (cc.collisionFlags == CollisionFlags.Below)
        {
            jumpCount = 1;
            isjumping = false;
        }
        else
        {
            //���߿��� �ӵ� ���� ���ϰ� �� ����Ʈ ������
            isjumping = true;
        }

        // ������� space Ű �Է��� �޴´�.
        if (Input.GetButtonDown("Jump") && jumpCount > 0)
        {
            // ���� ���������� ��(������)�� �߰��Ѵ�.
            yVelocity = jumpPower;
            jumpCount--;
        }

        // �Էµ� �������� �̵��Ѵ�(p = p0 + vt).

        moveSpeed = walkSpeed;
        float animSpeed = 0;

        if (dir.magnitude > 0)
        {
            if (Input.GetKey(KeyCode.LeftShift) && !isjumping)
            {
                animSpeed = moveSpeed = dir.magnitude * runSpeed;
            }
            else
            {
                animSpeed = moveSpeed = dir.magnitude * walkSpeed;
            }
        }

        // �߷� ���� �����Ѵ�.
        if(yVelocity < gravity)
        {

        }
        else
        yVelocity += gravity * Time.deltaTime;
        dir.y = yVelocity;

        cc.Move(dir * moveSpeed * Time.deltaTime);
    }

}
