using System.Collections;
using System.Linq;
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

        List<int> tmp = new List<int>();
                
        for (int i = 0; i < myPlamons.myPlamon.Count; i++)
        {
            tmp.Add((int)myPlamons.myPlamon[i].pladex.id);
        }

        tmp = tmp.Distinct().ToList();
        
        int sumnailIdx = Random.Range(0, tmp.Count);

        if (tmp[sumnailIdx] == 7)
        {
            sumnailIdx --;
        }

        int sumnailId = tmp[sumnailIdx];
        Debug.Log("乐绰 级匙老");
        Debug.Log(sumnailId);
        foreach (Myplamon item in myPlamons.myPlamon) {

            if (item.pladex.id == sumnailId) {
                sumnail = item;
                break;
            }
        }        

        return sumnail;
    }

    public MyCharacterInfo findSumnail_2(MyplamonDataJson myPlamons) {
        MyCharacterInfo sumnail = new MyCharacterInfo();

        int[] tmp = new int[myPlamons.notMyPlamon.pladexList.Count];

        int sumnailIdx = Random.Range(0, myPlamons.notMyPlamon.pladexList.Count);

        for (int i = 0; i < myPlamons.notMyPlamon.pladexList.Count; i++)
        {
            tmp[i] = (int)myPlamons.notMyPlamon.pladexList[i].id;
        }
        
        if (tmp[sumnailIdx] == 16)
        {
            sumnailIdx --;
        }

        int sumnailId = tmp[sumnailIdx];
        Debug.Log("绝绰 级匙老");
        Debug.Log(sumnailId);
        foreach (MyCharacterInfo item in myPlamons.notMyPlamon.pladexList) {
            if (item.id == sumnailId) {
                sumnail = item;
                break;
            }
        }

        return sumnail;
    }

    public void Initialize(Myplamon main, Myplamon sumnail_1, MyCharacterInfo sumnail_2) {
        Debug.Log("initialize");
        Debug.Log(sumnail_1.pladex.id);
        Debug.Log(sumnail_2.id);

        mainImage.sprite = Resources.Load<Sprite>("Character/Main/" + main.pladex.id.ToString()) as Sprite;
        sumnailImage.sprite = Resources.Load<Sprite>("Character/Sumnail/" + sumnail_1.pladex.id.ToString()) as Sprite;
        sumnailImage_2.sprite = Resources.Load<Sprite>("Character/SumnailBlur/" + sumnail_2.id.ToString()) as Sprite;
        level.text = "Level " + main.level.ToString();
        name.text = main.nickname;
    }
}

