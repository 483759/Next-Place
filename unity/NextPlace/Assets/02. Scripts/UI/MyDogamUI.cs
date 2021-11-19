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

    public Button typeFilterAll; 
    public Button typeFilterSee; 
    public Button typeFilterEat;

    public Button typeFilterGet; 
    public Button typeFilterNotGet; 
    public Button typeFilterGetAll;
    private List<GameObject> myDogamList;
    private List<GameObject> notMyDogamList;

    void Awake() {
        myDogamList = new List<GameObject>();
        notMyDogamList = new List<GameObject>();

        typeFilterAll.onClick.AddListener(SeeAll);
        typeFilterSee.onClick.AddListener(SeeSee);
        typeFilterEat.onClick.AddListener(SeeEat);
        typeFilterGet.onClick.AddListener(SeeGet);
        typeFilterNotGet.onClick.AddListener(SeeNotGet);
        typeFilterGetAll.onClick.AddListener(SeeGetAll);
    }

    void OnEnable()
    {
        getDogam = true;
        notGetDogam = true;
        typeState = 0;
        DataManager.instance.GetAllPlactions();
    }

    void SeeAll()
    {
        typeState = 0;
        
        foreach(GameObject item in myDogamList)
        {
            item.SetActive(true && getDogam);
        }
    
        foreach(GameObject item in notMyDogamList)
        {
            item.SetActive(true && notGetDogam);
        }
    
    }
    void SeeSee()
    {
        typeState = 2;

        foreach(GameObject item in myDogamList)
        {
            if (!item.GetComponent<DogamFilter>().filterType.Equals("FOOD"))
            {
                item.SetActive(true && getDogam);
            }
            else
            {
                item.SetActive(false);
            }
        }
        
        foreach(GameObject item in notMyDogamList)
        {
            if (!item.GetComponent<DogamFilter>().filterType.Equals("FOOD"))
            {
                item.SetActive(true && notGetDogam);
            }
            else
            {
                item.SetActive(false);
            }
        }
        
    }
    void SeeEat()
    {
        typeState = 1;
        
        foreach(GameObject item in myDogamList)
        {
            if (item.GetComponent<DogamFilter>().filterType.Equals("FOOD"))
            {
                item.SetActive(true && getDogam);
            }
            else
            {
                item.SetActive(false);
            }
        }

        foreach(GameObject item in notMyDogamList)
        {
            if (item.GetComponent<DogamFilter>().filterType.Equals("FOOD"))
            {
                item.SetActive(true && notGetDogam);
            }
            else
            {
                item.SetActive(false);
            }
        }
        
    }
    public GameObject toggle;
    public GameObject toggle2;
    public bool getDogam;
    public bool notGetDogam;
    public int typeState;

    void SeeGet()
    {   
        getDogam = false;
        notGetDogam = true;
        toggle.SetActive(false);
        toggle2.SetActive(true);
        if (typeState==0)
        {
            SeeAll();
        }
        else if (typeState==1)
        {
            SeeEat();
        }
        else if (typeState==2)
        {
            SeeSee();
        }
        
    }
    void SeeNotGet()
    {
        getDogam = true;
        notGetDogam = false;
        toggle.SetActive(true);
        toggle2.SetActive(false);
        if (typeState==0)
        {
            SeeAll();
        }
        else if (typeState==1)
        {
            SeeEat();
        }
        else if (typeState==2)
        {
            SeeSee();
        }
    }
    void SeeGetAll()
    {
        getDogam = true;
        notGetDogam = true;
        if (typeState==0)
        {
            SeeAll();
        }
        else if (typeState==1)
        {
            SeeEat();
        }
        else if (typeState==2)
        {
            SeeSee();
        }
    }

    public void InitializeMyDogam(MyDogamDataJson allplactions)
    {
        foreach (GameObject item in myDogamList) {
            Destroy(item.gameObject);
        }
        myDogamList.Clear();

        foreach (PlactionInfo item in allplactions.plactions)
        {
            GameObject mine = Resources.Load("MyDogam") as GameObject;
            GameObject real = Instantiate(mine);
            real.GetComponent<DogamFilter>().filterType = item.spot.type;
            real.GetComponent<DogamFilter>().id = item.spot.id;
            real.GetComponent<DogamFilter>().name = item.spot.name;
            real.GetComponent<DogamFilter>().detail = item.spot.detail;

            myDogamList.Add(real);
            GameObject Folder = GameObject.Find("Content");
            real.transform.SetParent(Folder.transform);
            real.GetComponent<Image>().sprite = Resources.Load<Sprite>("Spot/Sumnail/" + (item.spot.id)) as Sprite;
        }
    }
    public void InitializeNotMyDogam(MyDogamDataJson allplactions)
    {
        foreach (GameObject item in notMyDogamList) {
            Destroy(item.gameObject);
        }
        notMyDogamList.Clear();

        foreach (SpotInfo item in allplactions.spots)
        {
            GameObject mine = Resources.Load("NotMyDogam") as GameObject;
            GameObject real = Instantiate(mine);
            real.GetComponent<DogamFilter>().filterType = item.type;
            real.GetComponent<DogamFilter>().id = item.id;
            real.GetComponent<DogamFilter>().name = item.name;
            real.GetComponent<DogamFilter>().detail = item.detail;
            notMyDogamList.Add(real);
            GameObject Folder = GameObject.Find("Content");
            real.transform.SetParent(Folder.transform);
            real.GetComponent<Image>().sprite = Resources.Load<Sprite>("Spot/Sumnailblur/"+(item.id)) as Sprite;
        }
    }
}

