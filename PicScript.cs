using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PicScript : MonoBehaviour {



    public static string picPath;
    private Renderer renderer;
    private Transform tref;

    private void Awake()
    {
        renderer = gameObject.GetComponent<Renderer>();
        tref = gameObject.GetComponent<Transform>();
    }

    private void Start()
    {
        StartCoroutine(AssignTexture(picPath));
    }

    private IEnumerator AssignTexture(string path)
    {
        using (WWW www = new WWW(path))                     //WWW uses the IDisposable interface. "using" statement will Dispose of those object when the final curly brace is reached.
        {
            yield return www;                               //this line loads the texture into the www
            ExifLib.JpegInfo jpi = ExifLib.ExifReader.ReadJpeg(www.bytes, "Foo");
            switch (jpi.Orientation)
            {
                case ExifLib.ExifOrientation.TopRight:
                    tref.localEulerAngles = new Vector3(90f, 90f, -90f);
                    break;

                case ExifLib.ExifOrientation.BottomLeft:
                    tref.localEulerAngles = new Vector3(90f, 90f, 90f);
                    break;

                case ExifLib.ExifOrientation.BottomRight:
                    tref.localEulerAngles = new Vector3(90f, 90f, 180f);
                    break;
                default:
                    break;

            }
            
            renderer.material.mainTexture = www.texture;    //this assigns the texture.
        }
    }

}
