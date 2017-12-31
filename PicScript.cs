using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PicScript : MonoBehaviour {

    public static string picPath;
    private Renderer renderer;

    private void Awake()
    {
        renderer = gameObject.GetComponent<Renderer>();
    }

    private void Start()
    {
        StartCoroutine(AssignTexture(picPath));
    }

    private IEnumerator AssignTexture(string path)
    {
        using (WWW www = new WWW(path))
        {
            yield return www;                               //this line loads the texture into the www
            renderer.material.mainTexture = www.texture;    //this assigns the texture.
        }
    }

}
