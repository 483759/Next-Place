using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Allbook : MonoBehaviour
{
    // Start is called before the first frame update
    // void Start()
    // {
    //     DataManager.instance.GetAllPlactions();
    // }
    void OnEnable()
    {
        DataManager.instance.GetAllPlactions();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
