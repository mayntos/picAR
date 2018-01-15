using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//****DEPRECATED*** Ultimately ended up using Unity's UI system. Much more succint.
//class will be responsible for scale/position of buttons
public class ButtonDisplay : MonoBehaviour {

    //position for button1
    Rect button1;

    //variables for button's width
    float buttonWidth;
    public int widthValue;

    //variables for button's height.
    float buttonHeight;
    public int heightValue;

    Vector2 buttonPosition;                     //Vector2 for positioning of buttons
    Vector2 buttonScale;                        //Vector2 for scale of button


    GUIContent buttonContent;
    GUIStyle buttonStyle;
    public Texture icon;                        //texture used for GUIContent
    public Texture activeIcon;

    IOSBridge bridgeRef;

    private void Awake()
    {
        bridgeRef = gameObject.GetComponent<IOSBridge>();

    }

    // Use this for initialization
    void Start ()
    {

        buttonContent = new GUIContent(icon);
        buttonStyle = new GUIStyle("button");

        //setting the button's scale relative to the screen.
        buttonHeight = Screen.height / heightValue;
        buttonWidth = Screen.height / widthValue;
        buttonScale = new Vector2(buttonWidth, buttonHeight);

        //this centers the button.
        buttonPosition = new Vector2((Screen.width - buttonWidth) / 2, ((Screen.height - buttonHeight) / 2));
        
        //assign position and scale.
        button1 = new Rect(buttonPosition, buttonScale);


    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnGUI()
    {
        GUI.backgroundColor = new Color(50, 50, 50, 0.8f);
        //Uses the GUI class to create a button using the rect declared/initialized above.
        if (GUI.Button(button1, buttonContent, buttonStyle))
        {
            buttonContent.image = activeIcon;
           // bridgeRef.OpenImagePickerHelper(gameObject.name, "ImagePicked");
        }

    }
}
