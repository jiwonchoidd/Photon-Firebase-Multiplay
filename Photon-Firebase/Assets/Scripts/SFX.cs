using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFX : MonoBehaviour
{
     // �̱������� ���
    private static SFX instance = null;
    public static SFX Instance
    {
        get { return instance; }
    }
    AudioSource ad;

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
        ad = GetComponent<AudioSource>();

    }

    internal void Play()
    {
        if(!ad.isPlaying)
        ad.Play();
    }
}
