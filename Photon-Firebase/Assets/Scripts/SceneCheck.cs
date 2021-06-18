using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneCheck : MonoBehaviour
{

    void Start()
    {

        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            BGM.Instance.ChangeBGM(0);
        }
        else if (SceneManager.GetActiveScene().buildIndex == 1)
        {
            BGM.Instance.ChangeBGM(1);
        }
        else if (SceneManager.GetActiveScene().buildIndex == 2)
        {
            BGM.Instance.ChangeBGM(0);
        }
        else if (SceneManager.GetActiveScene().buildIndex == 3)
        {
            BGM.Instance.ChangeBGM(1);
        }

    }
}

