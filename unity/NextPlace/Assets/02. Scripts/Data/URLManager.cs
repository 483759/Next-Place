using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URLManager
{
    public static string TEST_URL {
        get {
            return "http://218.158.175.59:8080/api/user/login";
        }
    }
    public static string PUBLIC_URL
    {
        get
        {
            return "https://k5b106.p.ssafy.io/api";
        }
    }
    public static string WEBCLIENT_ID
    {
        get
        {
            return "566092159761-00bit1ke95d8ve2d16or2312estgrmuv.apps.googleusercontent.com";
        }
    }
}
