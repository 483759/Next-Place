using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


[Serializable]
public class MyAllPlactionCountsDataJson
{
    public List<CountInfo> plactions;
}

[Serializable]
public class CountInfo
{
    public int totalCount;
    public int myCount;
    public string name;
    public int id;
}
