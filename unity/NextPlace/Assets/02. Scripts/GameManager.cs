using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {
    public enum GameState {
        Login = 0,
        Map = 1,
        ARGame = 2
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
            if(item.state.Equals(gameState)) {
                foreach(GameObject obj in item.objects) {
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
