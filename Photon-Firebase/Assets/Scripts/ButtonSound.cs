
using UnityEngine;
using UnityEngine.UI;
public class ButtonSound : MonoBehaviour
{
    Button btn;
    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        if(btn!=null)
        {
            btn.onClick.AddListener(Sound);
        }
    }

   void Sound()
    {
        SFX.Instance.Play();
    }
}
