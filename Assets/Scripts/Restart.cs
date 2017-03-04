using UnityEngine;
using System.Collections;

public class Restart : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame

	void OnMouseDown() {

		AI.isDead = false;
		GameObject.Find("Main Camera").tag = "MainCamera";

		if(GameObject.Find("win") != null)
			GameObject.Find("win").active = false;

		if(GameObject.Find("lose") != null)
			GameObject.Find("lose").active = false;
		Application.LoadLevel("SqueezingTheorem");


	}
}
