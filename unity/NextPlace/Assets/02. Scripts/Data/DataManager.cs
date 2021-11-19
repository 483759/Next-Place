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

    public int nowState = 0;
    public int prevState = 0;

    void OnEnable() {
        LoadSprite();
    }

    /// 
    /////////////////////////////////////// Image Resources //////////////////////////////
    ///
    public Sprite defaultSprite;
    public enum SpriteResourceType {
        SpotMain = 0,
        SpotSumnail = 1,
        SpotSumnailBlur = 2,
        CharacterMain = 3,
        CharacterSumnail = 4,
        CharacterSumnailBlur = 5
    }
    private Dictionary<string, Sprite> _spriteResources;
    private string[] _imageFolderPath = {
        "Spot/Main/",
        "Spot/Sumnail/",
        "Spot/SumnailBlur/",
        "Character/Main/",
        "Character/Sumnail/",
        "Character/SumnailBlur/"
    };

    private void LoadSprite() {
        _spriteResources = new Dictionary<string, Sprite>();

        foreach (string path in _imageFolderPath) {
            Sprite[] sprites = Resources.LoadAll<Sprite>(path);

            foreach (Sprite sprite in sprites) {
                _spriteResources.Add(path + sprite.name, sprite);
            }
        }
    }

    public Sprite GetSprite(string name, SpriteResourceType type) {
        string path = _imageFolderPath[(int)type] + name;
        if (_spriteResources.ContainsKey(path)) {
            return _spriteResources[_imageFolderPath[(int)type] + name];
        }
        return defaultSprite;
    }

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
    public void PostPlaction(long spotId) {
        StartCoroutine(Post());
        IEnumerator Post() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction";

            PlactionPostDataJson postData = new PlactionPostDataJson();
            postData.spotId = spotId;
            postData.score = 100;
            postData.scoreToken = "";
            string json = JsonUtility.ToJson(postData);

            using (UnityWebRequest www = UnityWebRequest.Post(url, json)) {
                byte[] bytes = System.Text.Encoding.UTF8.GetBytes(json);
                www.uploadHandler = new UploadHandlerRaw(bytes);
                www.downloadHandler = new DownloadHandlerBuffer();
                www.SetRequestHeader("Content-Type", "application/json");

                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    PlactionDataJson plaction = JsonUtility.FromJson<PlactionDataJson>(text);
                    PlamonManager.instance.CatchEnd(plaction);

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
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    MyplamonDataJson myPlamons = JsonUtility.FromJson<MyplamonDataJson>(text);
                    Debug.Log(text);
                    Main = MypageUI.instance.findMain(myPlamons);
                    sumnail_1 = MypageUI.instance.findSumnail_1(myPlamons);
                    sumnail_2 = MypageUI.instance.findSumnail_2(myPlamons);

                    MypageUI.instance.Initialize(Main, sumnail_1, sumnail_2);

                    Debug.Log("요청 성공");
                } else {
                    Debug.Log("error");
                }
            }
        }
    }
    public void GetMyPlamons1() {
        StartCoroutine(Get());

        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    MyplamonDataJson myPlamons = JsonUtility.FromJson<MyplamonDataJson>(text);
                    // Debug.Log(text);
                    MyCharacters.instance.InitializeMyPlamon(myPlamons);
                    MyCharacters.instance.InitializeNotMyPlamon(myPlamons);

                    Debug.Log("요청 성공");
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    public void SendCharacterDetail(string what) {
        if (what.Equals("main")) {
            CharacterDetailUI.instance.Initialize(Main);
        } else if (what.Equals("sumnail")) {
            CharacterDetailUI.instance.Initialize(sumnail_1);
        }
    }

    public void SendCharacterWrong(MyCharacterInfo Data) {

    }

    public void GoData(MyplamonDataJson MyPlamons) {
        MypageUI.instance.MyPlamons = MyPlamons;
    }

    public Myplamon myPlamon = new Myplamon();
    // POST CharacterGatcha
    public void PostCharacterGatcha() {
        StartCoroutine(Post());

        IEnumerator Post() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon/gatcha";

            List<IMultipartFormSection> formData = new List<IMultipartFormSection>();

            using (UnityWebRequest www = UnityWebRequest.Post(url, formData)) {
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Myplamon data = JsonUtility.FromJson<Myplamon>(text);
                    myPlamon = data;
                    // 모달창 띄우고 user 정보를 갱신
                    GetUserInfo();
                    GameManager.instance.ModalOn("SuccessModal");
                    GatchaModalUI.instance.Initialize(data);
                    Debug.Log("뽑기 성공!");
                } else {
                    // 모달창 띄우기
                    GameManager.instance.ModalOff("FailedModal");
                    Debug.Log("error");
                }
            }
        }
    }

    // POST CharacterGatcha
    [Serializable]
    public class LevelUp {
        public int plamonId;
        public int dalgona;
    }

    public void PostCharacterLevelup() {
        StartCoroutine(Post());

        IEnumerator Post() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon/levelup";

            LevelUp levelUpData = new LevelUp();
            levelUpData.plamonId = (int)CharacterDetailUI.instance.nowPlamonId;
            levelUpData.dalgona = Convert.ToInt32(DalgonaModalUI.instance.dalgonaNumber.text);
            Debug.Log(levelUpData.plamonId);

            string json = JsonUtility.ToJson(levelUpData);

            Debug.Log("잘 담겼나");

            using (UnityWebRequest request = UnityWebRequest.Post(url, json)) {
                byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
                request.uploadHandler = new UploadHandlerRaw(jsonToSend);
                request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
                request.SetRequestHeader("Content-Type", "application/json");

                yield return request.SendWebRequest();

                if (request.error == null) {
                    string text = request.downloadHandler.text;
                    Myplamon data = JsonUtility.FromJson<Myplamon>(text);
                    myPlamon = data;
                    Debug.Log(text);
                    CharacterDetailUI.instance.Initialize(data);
                    GameManager.instance.ModalOff("DalgonaModal");
                    Debug.Log("레벨업 성공!");
                } else {
                    GameManager.instance.ModalOff("DalgonaModal");
                    Debug.Log("error");
                    Debug.Log(request.error);
                }
            }
        }
    }
    [Serializable]
    public class NewMain {
        public int newMainId;
    }
    public void PutChangeMain() {
        StartCoroutine(Put());

        IEnumerator Put() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon/main";

            NewMain newMainId = new NewMain();
            newMainId.newMainId = (int)CharacterDetailUI.instance.nowPlamonId;

            string json = JsonUtility.ToJson(newMainId);

            Debug.Log(json);

            using (UnityWebRequest request = UnityWebRequest.Put(url, json)) {
                byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
                request.uploadHandler = new UploadHandlerRaw(jsonToSend);
                request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
                request.SetRequestHeader("Content-Type", "application/json");

                yield return request.SendWebRequest();

                if (request.error == null) {
                    string text = request.downloadHandler.text;
                    Myplamon data = JsonUtility.FromJson<Myplamon>(text);
                    myPlamon = data;
                    Debug.Log(text);
                    GameManager.instance.ChangeGameState(3);
                    Debug.Log("메인 바꾸기 성공!");
                } else {
                    Debug.Log(request.error);
                    Debug.Log("error");
                }
            }
        }
    }

    public void PutSailCharacter() {
        StartCoroutine(Put());

        IEnumerator Put() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plamon/" + CharacterDetailUI.instance.nowPlamonId.ToString();
            byte[] myData = System.Text.Encoding.UTF8.GetBytes("We should to send some data");

            using (UnityWebRequest www = UnityWebRequest.Put(url, myData)) {
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    GameManager.instance.ChangeGameState(3);
                    Debug.Log("판매 성공 !");
                } else {
                    Debug.Log(www.error);
                    Debug.Log("error");
                }
            }
        }
    }

    /// 
    /////////////////////////////////////// Spots //////////////////////////////
    /// 
    // GET AllPlactionDatas

    public void GetAllPlactions() {
        // GameObject Doc = GameObject.Find("MyDogam(Clone)");
        // GameObject Doc2 = GameObject.Find("NotMyDogam(Clone)");
        // Destroy(Doc);
        // Destroy(Doc2);
        StartCoroutine(GetPlactions());

        IEnumerator GetPlactions() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction";

            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                // www.SetRequestHeader("Authorization","Bearer12345");
                yield return www.SendWebRequest();

                if (www.error == null) {
                    string text = www.downloadHandler.text;

                    MyDogamDataJson AllPlactions = JsonUtility.FromJson<MyDogamDataJson>(text);
                    MyDogamUI.instance.InitializeMyDogam(AllPlactions);
                    MyDogamUI.instance.InitializeNotMyDogam(AllPlactions);
                } else {
                    // Debug.Log("error");
                    Debug.Log(www.error);
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
                    GetUserInfo();
                    GetPlactionCountInfo();
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
    /// 
    /////////////////////////////////////// Achievement //////////////////////////////
    /// 

    // GET AchievementCountInfo
    public AchievementDataJson plactionCountInfo = new AchievementDataJson();
    public void GetPlactionCountInfo() {
        StartCoroutine(Get());
        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction/count";
            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    plactionCountInfo = JsonUtility.FromJson<AchievementDataJson>(text);
                } else {
                    Debug.Log("error");
                }
            }
        }
    }

    // GET AchievementCountInfo
    public AchievementDataJson plactionCityCountInfo = new AchievementDataJson();
    public string nowCity = "";
    public string nowGugun = "";
    public void GetPlactionCityCountInfo(string city) {
        StartCoroutine(Get());
        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction/count/" + city;
            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    nowCity = city;
                    plactionCityCountInfo = JsonUtility.FromJson<AchievementDataJson>(text);
                    SelectCity(city, plactionCityCountInfo);
                } else {
                    Debug.Log(www.error);
                    Debug.Log("error");
                }
            }
        }
    }

    public void SelectCity(string city, AchievementDataJson data) {
        if (city == "대전광역시") {
            AchievementDaejeonUI.instance.Initialize(data);
        }
    }

    public SpotDetailDataJson spotDetailInfo = new SpotDetailDataJson();
    public void GetPlactionDetailInfo(string gugun) {
        StartCoroutine(Get());
        IEnumerator Get() {
            string url = URLManager.PUBLIC_URL;
            url = url + "/plaction/" + nowCity + "/" + gugun;
            using (UnityWebRequest www = UnityWebRequest.Get(url)) {
                yield return www.SendWebRequest();
                if (www.error == null) {
                    string text = www.downloadHandler.text;
                    Debug.Log(text);
                    nowGugun = gugun;
                    spotDetailInfo = JsonUtility.FromJson<SpotDetailDataJson>(text);
                    AchievementDetailUI.instance.Initialize(gugun, spotDetailInfo);
                } else {
                    Debug.Log(www.error);
                    Debug.Log("error");
                }
            }
        }
    }
}
