using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


[Serializable]
public class MyplamonDataJson
{
    public List<Myplamon> myPlamon;
    public notMyPlamon notMyPlamon;
}

[Serializable]
public class Myplamon
{
    public long id;
    public long level;
    public long exp;
    public string nickname;
    public MyCharacterInfo pladex;
    public bool main;
}

[Serializable]
public class notMyPlamon
{
    public List<MyCharacterInfo> pladexList;
}

[Serializable]
public class MyCharacterInfo
{
    public long id;
    public string name;
    public string information;
    public string rank;
}
