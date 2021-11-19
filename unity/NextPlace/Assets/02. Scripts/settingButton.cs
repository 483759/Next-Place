using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class settingButton : MonoBehaviour
{
    public GameObject Mypage;
    public GameObject Logout;
    public GameObject hello;
    // public Button Logout;
    
    public void OnClickButton()
    {
        if (Mypage.activeSelf == false)
        {
            Mypage.SetActive(true);
        }
        else
        {
            Mypage.SetActive(false);
        }
        if (Logout.activeSelf == false)
        {
            Logout.SetActive(true);
        }
        else
        {
            Logout.SetActive(false);
        }
        if (hello.activeSelf == false)
        {
            hello.SetActive(true);
        }
        else
        {
            hello.SetActive(false);
        }
    }
    void OnEnable()
    {
        Mypage.SetActive(false);
        Logout.SetActive(false);
        hello.SetActive(false);
    }
    // Start is called before the first frame update
    void Start()
    {
        // button = GetComponent<Button>();
        // button.onClick.AddListener(onClickButton);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
