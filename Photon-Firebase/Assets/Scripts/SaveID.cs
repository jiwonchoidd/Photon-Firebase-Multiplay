
using UnityEngine;
using UnityEngine.UI;
public class SaveID : MonoBehaviour
{
    public Toggle toggle;
    public InputField input_email;
    void Start()
    {
        if (!PlayerPrefs.HasKey("email"))
        {
            PlayerPrefs.SetString("email", "");
            PlayerPrefs.Save();
        }
        else if(PlayerPrefs.GetString("email")!="")
        {
            input_email.text = PlayerPrefs.GetString("email");
            toggle.isOn = true;
        }
        else
        {
            toggle.isOn = false;
        }
    }


    public void EmailSave()
    {
        if (toggle.isOn)
        {
            if (!PlayerPrefs.HasKey("email"))
            {
                PlayerPrefs.SetString("email", input_email.text);
                PlayerPrefs.Save();
            }
            else
            {
                PlayerPrefs.SetString("email", input_email.text);
                PlayerPrefs.Save();
            }
        }
        else
        {
            // 토글 해제 되있으면?? 공백으로 저장함
            PlayerPrefs.SetString("email", "");
            PlayerPrefs.Save();
        }
    }
   
}
