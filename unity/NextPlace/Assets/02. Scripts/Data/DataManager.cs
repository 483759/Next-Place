using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DataManager : MonoBehaviour {
    private static DataManager _instance = null;
    public static DataManager instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<DataManager>();
                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("DataManager").AddComponent<DataManager>();
                }
            }
            return _instance;
        }
    }

    public int[,] expTable = { { 0, 0 }, { 0, 15 }, { 15, 34 }, { 34, 49 }, { 49, 57 }, { 106, 92 }, { 198, 135 }, { 333, 372 }, { 705, 560 }, { 1265, 840 }, { 2105, 1242 }, { 3347, 1242 }, { 4589, 1242 }, { 5831, 1242 }, { 5831, 1242 }, { 7073, 1242 }, { 8315, 1242 }, { 9557, 1490 } };

    /// 
    /////////////////////////////////////// Spot //////////////////////////////
    /// 
    private SpotDataJson _spotData;

    public SpotInfo GetSpotInfoById(long id) {
        foreach (SpotInfo info in _spotData.spotList) {
            if (info.id == id) return info;
        }
        return null;
    }

    public void GetSpot(double lat, double lng) {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/spot?lat=" + lat + "&lng=" + lng;

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    _spotData = JsonUtility.FromJson<SpotDataJson>(text);
                    SpotManager.instance.CreateSpots(_spotData);

                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    public SpotDataJson Spots = new SpotDataJson();

    public void GetSpots(float lat, float lng) {
        lat = 36.3278695428752f;
        lng = 127.427240868819f;
        StartCoroutine(GetSpotObject());

        IEnumerator GetSpotObject() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/spot?" + "lat=" + lat + "&lng=" + lng;

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Spots = JsonUtility.FromJson<SpotDataJson>(text);
                    Debug.Log(Spots);
                } else {
                    Debug.Log("error");
                    Debug.Log(www.error);
                }
            }
        }
    }

    /// 
    /////////////////////////////////////// Characters //////////////////////////////
    /// 
    // GET AllCharacterData 
    public AllCharacterDataJson AllCharacters = new AllCharacterDataJson();

    public void GetAllCharacters() {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/pladex";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    AllCharacters = JsonUtility.FromJson<AllCharacterDataJson>(text);
                    Debug.Log(AllCharacters.pladexList);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    // GET MyplamonData
    public MyplamonDataJson MyPlamons = new MyplamonDataJson();
    public Myplamon Main = new Myplamon();
    public Myplamon sumnail_1 = new Myplamon();
    public MyCharacterInfo sumnail_2 = new MyCharacterInfo();

    public void GetMyPlamons() {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    MyplamonDataJson myPlamons = JsonUtility.FromJson<MyplamonDataJson>(text);

                    Main = MypageUI.instance.findMain(myPlamons);
                    Debug.Log(Main.pladex.name);
                    sumnail_1 = MypageUI.instance.findSumnail_1(myPlamons);
                    sumnail_2 = MypageUI.instance.findSumnail_2(myPlamons);

                    MypageUI.instance.Initialize(Main, sumnail_1.pladex, sumnail_2);

                    Debug.Log("요청 성공");
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    public void SendCharacterDetail(string what) {
        if (what.Equals("main")) {
            //Debug.Log("이니셜라이즈 보내기");
            //Debug.Log(Main.pladex.name);
            CharacterDetailUI.instance.Initialize(Main);
        } else if (what.Equals("sumnail")) {
            //Debug.Log("썸네일 보내기");
            //Debug.Log(Sumnail_1.pladex.id);
            CharacterDetailUI.instance.Initialize(sumnail_1);
        }
    }

    public void SendCharacterWrong(MyCharacterInfo Data) {

    }

    public void GoData(MyplamonDataJson MyPlamons) {
        MypageUI.instance.MyPlamons = MyPlamons;
    }

    // POST CharacterGatcha
    public void PostCharacterGatcha() {
        StartCoroutine(Post());

        IEnumerator Post() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon/gatcha";

            List<IMultipartFormSection> formData = new List<IMultipartFormSection>();

            using (UnityWebRequest www = UnityWebRequest.Post(url, formData)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    Debug.Log("뽑기 성공!");
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    /// 
    /////////////////////////////////////// Spots //////////////////////////////
    /// 
    // GET AllPlactionDatas
    public AllPlactionDataJson AllPlactions = new AllPlactionDataJson();

    public void GetAllPlactions() {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    AllPlactions = JsonUtility.FromJson<AllPlactionDataJson>(text);
                    Debug.Log(AllPlactions);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }
    /// 
    /////////////////////////////////////// Ranks //////////////////////////////
    /// 
    // GET AllPlactionsCounts

    public MyAllPlactionCountsDataJson AllPlactionsCounts = new MyAllPlactionCountsDataJson();

    public void GetAllPlactionsCounts() {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction/count";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    AllPlactionsCounts = JsonUtility.FromJson<MyAllPlactionCountsDataJson>(text);
                    Debug.Log(AllPlactionsCounts);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    /// 
    /////////////////////////////////////// Users //////////////////////////////
    /// 
    // POST GusetLogin
    public void PostGuestLogin() {
        StartCoroutine(Post());
        IEnumerator Post() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/user/guest";
            List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
            using (UnityWebRequest www = UnityWebRequest.Post(url, formData)) {
                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    Debug.Log("게스트 로그인 성공!");
                    GameManager.instance.ChangeGameState(1);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    // GET UserInfo
    public UserInfoDataJson userInfo = new UserInfoDataJson();
    public void GetUserInfo() {
        StartCoroutine(Get());
        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/user/me";
            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                www.SetRequestHeader("Authorization", "Bearer12345");
                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    userInfo = JsonUtility.FromJson<UserInfoDataJson>(text);
                    Debug.Log(userInfo);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }
}
