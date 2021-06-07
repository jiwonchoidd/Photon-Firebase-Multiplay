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
    // ���̾�̽������Ҽ��ִ� ��Ȳ����?
    public bool isFirebaseReady { get; private set; }
    // �α��� ����������?
    public bool isSignInOnProgress { get; private set; }

    public InputField emailField;
    public InputField passwordField;
    public Button signinbutton;

    public GameObject errorPanel;
    public Text errorText;

    // ���̾�̽� �����ϴ� ������Ʈ
    public static FirebaseApp firebaseApp;
    public static FirebaseAuth firebaseAuth;

    // ��� ���� �̸��� �н����� �����ͼ� �³� Ȯ���ϴ°� ó������ null ����
    public static FirebaseUser User;
    void Start()
    {
        errorPanel.SetActive(false);
        signinbutton.interactable = false;
        //��������? �ƴϸ� �Ƚ�
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
        if (!isFirebaseReady || isSignInOnProgress || User!=null)
        {
            return;
        }


        //�α��� ����
        isSignInOnProgress = true;
        signinbutton.interactable = false;

        //firebaseAuth.SignInWithCredentialAsync ���߿�
        firebaseAuth.SignInWithEmailAndPasswordAsync(emailField.text, passwordField.text).ContinueWithOnMainThread((task) =>
        {
            Debug.Log($"Sign in status");
            signinbutton.interactable = true;
            if(task.IsFaulted)
            {
                Debug.LogError(task.Exception);
                errorPanel.SetActive(true);
                errorText.text = "The account is not exist";
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
    public void resetSignIn()
    {
        SceneManager.LoadScene("Signin");
    }

}
