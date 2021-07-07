using UnityEngine;
using System.Collections;

public class Fog : MonoBehaviour
{

    public static Fog instance;
    private void Awake()
    {
        instance = this;
    }



    public bool isFogOnOff = false;

    public Color RkFogColor;

    public float speed =0.9f;

    public enum FogModi : int
    {
        Linear = 0,
        Expotential = 1,
        ExpotentialSquared = 2,
    }

    public FogModi Fogenum;

    public float LinearStart = 0.0f;
    public float LinearEnd = 10.0f;

    public float ExpotentialDensity = 0.01f;


    // Use this for initialization
    void FixedUpdate()
    {

        if (isFogOnOff == true)
        {
            RenderSettings.fog = true;
            RenderSettings.fogColor = RkFogColor;

            if ((int)Fogenum == 0)
            {          
                RenderSettings.fogMode = FogMode.Linear;
                RenderSettings.fogStartDistance = LinearStart;
                RenderSettings.fogEndDistance = Mathf.Lerp(1000, LinearEnd, speed) * Time.deltaTime;
            }
            if ((int)Fogenum == 1)
            {
                RenderSettings.fogMode = FogMode.Exponential;
                RenderSettings.fogDensity = ExpotentialDensity;
            }
            if ((int)Fogenum == 2)
            {
                RenderSettings.fogMode = FogMode.ExponentialSquared;
                RenderSettings.fogDensity = ExpotentialDensity;
            }

        }
        else
        {
            RenderSettings.fog = false;
        }
    }
}
