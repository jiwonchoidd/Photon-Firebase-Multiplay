using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Extensions;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AuthManager : MonoBehaviour
{
    // 파이어베이스구동할수있는 상황인지?
    public bool isFirebaseReady { get; private set; }
    // 로그인 과정중인지?
    public bool isSignInOnProgress { get; private set; }

    public InputField emailField;
    public InputField passwordField;
    public Button signinbutton;

    public GameObject errorPanel;
    public Text errorText;

    // 파이어베이스 관리하는 오브젝트
    public static FirebaseApp firebaseApp;
    public static FirebaseAuth firebaseAuth;

    // 어스를 통해 이메일 패스워드 가져와서 맞나 확인하는것 처음에는 null 값임
    public static FirebaseUser User;
    void Start()
    {
        errorPanel.SetActive(false);
        signinbutton.interactable = false;
        //구동가능? 아니면 픽스
        FirebaseApp.CheckDependenciesAsync().ContinueWith(task=>
        {
            var result = task.Result;
            if(result!=DependencyStatus.Available)
            {
                Debug.LogError(result.ToString());
                isFirebaseReady = false;

            }
            else
            {
                isFirebaseReady = true;
                firebaseApp = FirebaseApp.DefaultInstance;
                firebaseAuth = FirebaseAuth.DefaultInstance;
            }

            signinbutton.interactable = isFirebaseReady;
        }
        
      );
    }

    public void SignIn()
    {
        if (!isFirebaseReady || isSignInOnProgress /*|| User!=null*/)
        {
            errorPanel.SetActive(true);
            errorText.text = "You missed something.";
            return;
        }


        //로그인 시작
        isSignInOnProgress = true;
        signinbutton.interactable = false;

        //firebaseAuth.SignInWithCredentialAsync 나중에
        firebaseAuth.SignInWithEmailAndPasswordAsync(emailField.text, passwordField.text).ContinueWithOnMainThread((task) =>
        {
            Debug.Log($"Sign in status");
            signinbutton.interactable = true;
            if(task.IsFaulted)
            {
                Debug.LogError(task.Exception);
                errorPanel.SetActive(true);
                if (emailField.text.Length==0|| passwordField.text.Length == 0)
                {
                errorText.text = "You missed something.";
                }
                else
                errorText.text = "This account is not exist";
            }
            else if(task.IsCanceled)
            {
                Debug.LogError("Signin Canceled");
                errorPanel.SetActive(true);
                errorText.text = "Signin Canceled";
            }
            else
            {
                User = task.Result;
                Debug.Log(User.Email);
                SceneManager.LoadScene("Lobby");
            }
        });
    }
    public void CreateAccount()
    {
        if(!PlayerPrefs.HasKey("alreadycreate"))
        {
            PlayerPrefs.SetInt("alreadycreate", 0);
            PlayerPrefs.Save();
        }
        if(PlayerPrefs.GetInt("alreadycreate")==1)
        {
            Debug.LogError("already create");
            errorPanel.SetActive(true);
            errorText.text = "You have already created an account on this device.";
            return;
        }
        string email = emailField.text.Trim();
        string pwd = passwordField.text.Trim();

        firebaseAuth.CreateUserWithEmailAndPasswordAsync(email, pwd).ContinueWithOnMainThread((task) =>
            {
                signinbutton.interactable = true;
                if (task.IsFaulted)
                {
                    Debug.LogError(task.Exception);
                    errorPanel.SetActive(true);
                    if (emailField.text.Length == 0 || passwordField.text.Length == 0)
                    {
                        errorText.text = "You missed something.";
                    }
                    else
                        errorText.text = "This account is inappropriate.";
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError("Signin Canceled");
                    errorPanel.SetActive(true);
                    errorText.text = "Signin Canceled";
                }
                else
                {
                    User = task.Result;
                    Debug.Log(User.Email);
                    SceneManager.LoadScene("Signin");
                    //한 기기 당 하나 씩 만들 수 있게...
                    //PlayerPrefs를 이용하자
                    PlayerPrefs.SetInt("alreadycreate", 1);
                    PlayerPrefs.Save();
                }
            });

     }
    public void resetSignIn()
    {
        SceneManager.LoadScene("Signin");
    }
    public void resetCreateAccount()
    {
        SceneManager.LoadScene("CreateAccount");
    }
    public void resetPlayerPref()
    {
        PlayerPrefs.DeleteAll();
    }
    private IEnumerator TimeDelay(float i, string scene)
    {
        yield return new WaitForSeconds(i);
        SceneManager.LoadScene(scene);
    }

}
