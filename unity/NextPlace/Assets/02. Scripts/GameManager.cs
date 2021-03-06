using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

    private static GameManager _instance = null;
    public static GameManager instance {
        get {
            if (_instance == null) {
                var obj = GameObject.FindObjectOfType<GameManager>();
                if (obj != null) {
                    _instance = obj;
                } else {
                    _instance = new GameObject("GameManager").AddComponent<GameManager>();
                }
            }
            return _instance;
        }
    }

    public enum GameState {
        Login = 0,
        Map = 1,
        ARGame = 2,
        Mypage = 3,
        MyCharacters = 4,
        MyCharacterDetail = 5,
        Book = 6,
        BookDetail = 7,
        AchievementCountry = 8,
        AchievementDetail = 9,
        Gatcha = 10,
        AchievementGyeongi = 11,
        AchievementSeoul = 12,
        AchievementIncheon = 13,
        AchievementDaejeon = 14,
        AchievementChungnam = 15,
        AchievementChungbuk = 16,
        AchievementGyungnam = 17,
        AchievementGyungbuk = 18,
        AchievementJunbuk = 19,
        AchievementJunnam = 20,
        AchievementGwangju = 21,
        AchievementBusan = 22,
        AchievementUlsan = 23,
        AchievementJeju = 24,
        AchievementGangwon = 25,
    }

    [Serializable]
    public class DisplayObjectItem {
        public GameState state;
        public List<GameObject> objects;
    }

    public List<DisplayObjectItem> displayObject;
    public GameState gameState;
    public GameObject spotUI;
    public GameObject loadingUI;
    public long selectedSpotId { get; set; }

    void OnEnable() {
        if (!Application.isEditor) {
            OpenLoadingUI();
            DataLoadCheck();
        }
    }

    private void DataLoadCheck() {
        if (GPSManager.gpsStarted) {
            CloseLoadingUI();
            return;
        }
        Invoke("DataLoadCheck", 0.1f);
    }

    public void OpenLoadingUI() {
        loadingUI.SetActive(true);
    }

    public void CloseLoadingUI() {
        loadingUI.SetActive(false);
    }

    public void ChangeGameState(int state) {
        if (!Enum.IsDefined(typeof(GameState), state)) return;

        foreach (DisplayObjectItem item in displayObject) {         
            if (item.state.Equals(gameState)) {
                foreach (GameObject obj in item.objects) {
                    obj.SetActive(false);
                }
            }
        }
        DataManager.instance.prevState = DataManager.instance.nowState;
        DataManager.instance.nowState = state;

        gameState = (GameState)state;
        foreach (DisplayObjectItem item in displayObject) {
            if (item.state.Equals(gameState)) {
                foreach (GameObject obj in item.objects) {
                    obj.SetActive(true);
                }
            }
        }
    }

    public void goBack() {
        ChangeGameState(DataManager.instance.prevState);
    }

    public void PostCharacterGatcha() {
        DataManager.instance.PostCharacterGatcha();
    }

    public void OpenSpotUI(long spotId, Vector3 position) {
        SpotInfo info = DataManager.instance.GetSpotInfoById(spotId);
        if (info == null) return;

        selectedSpotId = spotId;
        spotUI.SetActive(true);
        spotUI.GetComponent<SpotUI>().Initialize(info, position);
    }

    public void CloseSpotUI() {
        spotUI.SetActive(false);
    }

    public void GetSpot() {
        DataManager.instance.GetSpots(0.0f, 0.0f);
    }

    public GameObject successModal;
    public GameObject failedModal;
    public GameObject dalgonaModal;

    public void ModalOn(string modalName)
    {
        if (modalName == "SuccessModal")
        {
            successModal.SetActive(true);
        } 
        else if (modalName == "FailedModal")
        {
            failedModal.SetActive(true);
        } 
        else if (modalName == "DalgonaModal")
        {
            DataManager.instance.GetUserInfo();
            dalgonaModal.SetActive(true);
        }
    }

    public void ModalOff(string modalName)
    {
        if (modalName == "SuccessModal")
        {
            successModal.SetActive(false);
        }
        else if (modalName == "FailedModal")
        {
            failedModal.SetActive(false);
        }
        else if (modalName == "DalgonaModal")
        {
            dalgonaModal.SetActive(false);
        }
    }
}
