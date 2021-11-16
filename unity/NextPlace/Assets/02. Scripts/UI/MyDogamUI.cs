using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MyDogamUI : MonoBehaviour {
    private static MyDogamUI _instance = null;
    public static MyDogamUI instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<MyDogamUI>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("MyDogamUI").AddComponent<MyDogamUI>();
                }
            }
            return _instance;
        }
    }

    public Image sumnailImage;
    public Image sumnailImage2;
    public Image sumnailImage3;
    public Image sumnailImage4;
    public Image sumnailImage5;
    public Image sumnailImage6;
    public Image page;

    public MyDogamDataJson MyDogams = new MyDogamDataJson();


    void OnEnable()
    {
        DataManager.instance.GetAllPlactions();
        sumnailImage.sprite = Resources.Load<Sprite>("Spot/Main/3.png") as Sprite;
        sumnailImage2.sprite = Resources.Load<Sprite>("Spot/Main/4.png") as Sprite;
        sumnailImage3.sprite = Resources.Load<Sprite>("Spot/Main/5.png") as Sprite;
        sumnailImage4.sprite = Resources.Load<Sprite>("Spot/Main/6.png") as Sprite;
        sumnailImage5.sprite = Resources.Load<Sprite>("Spot/Main/7.png") as Sprite;
        sumnailImage6.sprite = Resources.Load<Sprite>("Spot/Main/8.png") as Sprite;
    }

    // public MyDogam findMain(MyDogamDataJson MyDogams)
    // {        
    //     MyDogam main = new MyDogam();

    //     foreach (MyDogam item in MyDogams.myDogam)
    //     {
    //             main = item;
    //             break;
    //     }

    //     return main;
    // }

    
    
    public PlactionInfo findSumnail_1(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }
    public PlactionInfo findSumnail_2(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }
    public PlactionInfo findSumnail_3(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }
    public PlactionInfo findSumnail_4(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }
    public PlactionInfo findSumnail_5(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }
    public PlactionInfo findSumnail_6(MyDogamDataJson MyDogams)
    {
        PlactionInfo sumnail = new PlactionInfo();

        foreach (PlactionInfo item in MyDogams.myDogam)
        {

                sumnail = item;
                break;
        }

        return sumnail;
    }



    public void Initialize(PlactionInfo sumnail1, PlactionInfo sumnail2,PlactionInfo sumnail3,PlactionInfo sumnail4,PlactionInfo sumnail5,PlactionInfo sumnail6)
    {
        sumnailImage.sprite = Resources.Load<Sprite>("Spot/Sumnail/3" ) as Sprite;
        sumnailImage2.sprite = Resources.Load<Sprite>("Spot/Sumnail/4" ) as Sprite;
        sumnailImage3.sprite = Resources.Load<Sprite>("Spot/Sumnail/5" ) as Sprite;
        sumnailImage4.sprite = Resources.Load<Sprite>("Spot/Sumnail/6" ) as Sprite;
        sumnailImage5.sprite = Resources.Load<Sprite>("Spot/Sumnail/7" ) as Sprite;
        sumnailImage6.sprite = Resources.Load<Sprite>("Spot/Sumnail/8" ) as Sprite;
    }
}

