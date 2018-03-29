using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;

public class IOSBridge : MonoBehaviour
{
    //Pulls the plugin function from .mm file
    [DllImport("__Internal")]
    private static extern void OpenImagePicker(string game_object_name, string function_name); 

    //helper function to allow ButtonDisplay.cs to communicate with this script.
    public void OpenImagePickerHelper()
    {
        OpenImagePicker(gameObject.name, "ImagePicked");
    }

    //OpenImagePicker returns the NSURL location of the selected picture
    //to this method. The static picPath variable stores that valuefor rendering.
    void ImagePicked(string path)
    {
        PicScript.picPath = path;
        SceneManager.LoadScene("ARTestScene");
    }


    //Loads the vuforia scene.
    public void LoadCameraScene()
    {
        SceneManager.LoadScene("ARTestScene");
    }
}
