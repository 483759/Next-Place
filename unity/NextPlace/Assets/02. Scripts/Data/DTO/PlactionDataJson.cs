using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

   // Start is called before the first frame update[Serializable]
public class SpotDataJson
{
    public List<SpotInfo> spotList;
}

[Serializable]
public class PlactionInfo
{
    public SpotInfo spot;
    public int score;
    public string createdDate;
    public string modifiedDate;
}

[Serializable]
public class SpotInfo
{
    public long id;
    public string name;
    public string type;
    public string information;
    public string detail;
    public float lat;
    public float lng;
    public bool random;
}

