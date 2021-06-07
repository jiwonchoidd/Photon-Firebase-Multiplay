using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGM : MonoBehaviour
{
    // ½Ì±ÛÅæÀ¸·Î ¿î¿ë
    private static BGM instance = null;
    public static BGM Instance
    {
        get { return instance; }
    }


    void Start()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        else
        {
            instance = this;
        }

        DontDestroyOnLoad(this.gameObject);
    }
}
