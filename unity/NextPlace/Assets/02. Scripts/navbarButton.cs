using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class navbarButton : MonoBehaviour
{
    public GameObject Book;
    public GameObject Gatcha;
    public GameObject Score;
    public GameObject Map;
    // public Button Logout;
    
    public void OnClickButton()
    {
        if (Book.activeSelf == false)
        {
            Book.SetActive(true);
        }
        else
        {
            Book.SetActive(false);
        }
        if (Gatcha.activeSelf == false)
        {
            Gatcha.SetActive(true);
        }
        else
        {
            Gatcha.SetActive(false);
        }
        if (Score.activeSelf == false)
        {
            Score.SetActive(true);
        }
        else
        {
            Score.SetActive(false);
        }
        if (Map.activeSelf == false)
        {
            Map.SetActive(true);
        }
        else
        {
            Map.SetActive(false);
        }
    }
    void OnEnable()
    {
        Book.SetActive(false);
        Map.SetActive(false);
        Score.SetActive(false);
        Gatcha.SetActive(false);
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
