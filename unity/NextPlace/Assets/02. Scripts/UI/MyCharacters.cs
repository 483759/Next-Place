using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


public class MyCharacters : MonoBehaviour
{    
    private static MyCharacters _instance = null;
    public static MyCharacters instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<MyCharacters>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
                    _instance = new GameObject("MyCharacters").AddComponent<MyCharacters>();
                }
            }
            return _instance;
        }
    }

    private List<GameObject> myPlamonList;
    private List<GameObject> notMyPlamonList;
    void Awake() {
        myPlamonList = new List<GameObject>();
        notMyPlamonList = new List<GameObject>();
    }
    void OnEnable()
    {
        DataManager.instance.GetMyPlamons1();
    }

    public void InitializeMyPlamon(MyplamonDataJson allplamons)
    {
        foreach (GameObject item in myPlamonList) {
            Destroy(item.gameObject);
        }
        myPlamonList.Clear();

        foreach (Myplamon item in allplamons.myPlamon)
        {
            GameObject mine = Resources.Load("MyPlamon") as GameObject;
            GameObject real = Instantiate(mine);
            real.GetComponent<PlamonFilter>().id = item.id;
            real.GetComponent<PlamonFilter>().spriteId = item.pladex.id;
            real.GetComponent<PlamonFilter>().level = item.level;
            real.GetComponent<PlamonFilter>().exp = item.exp;
            real.GetComponent<PlamonFilter>().name = item.pladex.name;
            real.GetComponent<PlamonFilter>().information = item.pladex.information;
            real.GetComponent<PlamonFilter>().rank = item.pladex.rank;
            real.GetComponent<PlamonFilter>().main = item.main;

            myPlamonList.Add(real);
            GameObject Folder = GameObject.Find("Content");
            real.transform.SetParent(Folder.transform);
            real.GetComponent<Image>().sprite = DataManager.instance.GetSprite(item.pladex.id.ToString(), DataManager.SpriteResourceType.CharacterSumnail);
        }
    }
    public void InitializeNotMyPlamon(MyplamonDataJson allplamons)
    {
        foreach (GameObject item in notMyPlamonList) {
            Destroy(item.gameObject);
        }
        notMyPlamonList.Clear();

        foreach (MyCharacterInfo item in allplamons.notMyPlamon.pladexList)
        {
            GameObject mine = Resources.Load("NotMyPlamon") as GameObject;
            GameObject real = Instantiate(mine);
            Destroy(real.GetComponent<Button>());
            real.GetComponent<PlamonFilter>().id = item.id;
            real.GetComponent<PlamonFilter>().name = item.name;
            real.GetComponent<PlamonFilter>().information = item.information;
            real.GetComponent<PlamonFilter>().rank = item.rank;
            notMyPlamonList.Add(real);
            GameObject Folder = GameObject.Find("Content");
            real.transform.SetParent(Folder.transform);
            real.GetComponent<Image>().sprite = DataManager.instance.GetSprite(item.id.ToString(), DataManager.SpriteResourceType.CharacterSumnailBlur);

        }
    }
}
