using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoadScript : MonoBehaviour {

    public void LoadMainScene()
    {
        SceneManager.LoadScene("testScene");
    }


}
