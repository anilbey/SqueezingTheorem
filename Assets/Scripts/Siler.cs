using UnityEngine;
using System.Collections;

public class Siler : MonoBehaviour 
{	
	void OnCollisionEnter (Collision col)
	{
		Destroy(this.gameObject);
	}

}
