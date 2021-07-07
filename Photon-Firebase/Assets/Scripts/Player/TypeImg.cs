using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TypeImg : MonoBehaviour
{
    public Sprite hush;
    private Image type;

    public void ChangeImg()
    {
            type = GetComponent<Image>();
            type.sprite = hush;
    }
}
