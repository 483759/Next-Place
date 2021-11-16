using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MypageUI : MonoBehaviour {
    private static MypageUI _instance = null;
    public static MypageUI instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<MypageUI>();
                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("MypageUI").AddComponent<MypageUI>();
                }
            }
            return _instance;
        }
    }

    public Image mainImage;
    public Image sumnailImage;
    public Image sumnailImage_2;
    public TextMeshProUGUI level;
    public TextMeshProUGUI name;

    public MyplamonDataJson MyPlamons = new MyplamonDataJson();


    void OnEnable() {
        DataManager.instance.GetMyPlamons();
    }

    public Myplamon findMain(MyplamonDataJson myPlamons) {
        Myplamon main = new Myplamon();

        foreach (Myplamon item in myPlamons.myPlamon) {
            if (item.main == true) {
                main = item;
                break;
            }
        }

        return main;
    }

    public Myplamon findSumnail_1(MyplamonDataJson myPlamons) {
        Myplamon sumnail = new Myplamon();

        foreach (Myplamon item in myPlamons.myPlamon) {
            if (item.id == 8) {
                Debug.Log("표시");
                sumnail = item;
                break;
            }
        }

        return sumnail;
    }

    public MyCharacterInfo findSumnail_2(MyplamonDataJson myPlamons) {
        MyCharacterInfo sumnail = new MyCharacterInfo();

        foreach (MyCharacterInfo item in myPlamons.notMyPlamon.pladexList) {
            if (item.id == 8) {
                Debug.Log("표시2");
                sumnail = item;
                break;
            }
        }

        return sumnail;
    }

    public void Initialize(Myplamon main, MyCharacterInfo sumnail_1, MyCharacterInfo sumnail_2) {
        mainImage.sprite = Resources.Load<Sprite>("Character/Main/" + main.pladex.id.ToString()) as Sprite;
        sumnailImage.sprite = Resources.Load<Sprite>("Character/Sumnail/" + sumnail_1.id.ToString()) as Sprite;
        sumnailImage_2.sprite = Resources.Load<Sprite>("Character/SumnailBlur/" + sumnail_2.id.ToString()) as Sprite;
        level.text = "Level " + main.level.ToString();
        name.text = main.nickname;
    }
}

