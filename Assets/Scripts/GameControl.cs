using UnityEngine;
using System.Collections;

public class GameControl : MonoBehaviour {


	public GameObject win,lose;
	private bool entered = false;

	// Use this for initialization
	void Start () {
		win.active = false;
		lose.active = false;
	}
	
	// Update is called once per frame
	void Update () {
	

		if (AI.isDead && !entered)
		{
			win.active = true;
			entered = true;
			GameObject.Find("GreivousPrefab").active = false;
		}
		else if (GameObject.Find("Main Camera").tag == "lose" && !entered)
		{
			lose.active = true;
			entered = true;
			GameObject.Find("EnemyPrefab (Clone)").active = false;
		}


	}
}
