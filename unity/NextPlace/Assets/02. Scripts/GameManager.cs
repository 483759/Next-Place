using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {

    private static GameManager _instance = null;
    public static GameManager instance
    {
        get
        {
            if (_instance == null)
            {
                var obj = GameObject.FindObjectOfType<GameManager>();
                if (obj != null)
                {
                    _instance = obj;
                }
                else
                {
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

    public Camera[] cameraList;
    public GameState gameState;



    // Start is called before the first frame update
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }

    public void ChangeGameState(int state) {
        if (!Enum.IsDefined(typeof(GameState), state)) return;

        foreach(DisplayObjectItem item in displayObject) {
            if (item.state.Equals(gameState))
            {
                foreach (GameObject obj in item.objects)
                {
                    obj.SetActive(false);
                }
            }
        }

        gameState = (GameState)state;
        foreach (DisplayObjectItem item in displayObject) {
            if (item.state.Equals(gameState)) {
                foreach (GameObject obj in item.objects) {
                    obj.SetActive(true);
                }                
            }
        }
    }
}
