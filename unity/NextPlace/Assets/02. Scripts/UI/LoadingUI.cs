using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LoadingUI : MonoBehaviour {
    public int maxCount;
    public int loopCount;
    public TextMeshProUGUI loadingText;

    private static string _defaultText = "Loading";
    private static string _loopText = ".";
    private static int _count;

    void OnEnable() {
        Initialize();
    }

    void Update() {
        _count++;

        if (_count >= maxCount) {
            Initialize();
            return;
        }
        if (_count % loopCount == 0) loadingText.text += _loopText;
    }

    private void Initialize() {
        loadingText.text = _defaultText;
        _count = 0;
    }
}
