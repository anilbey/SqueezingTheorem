using UnityEngine;
using System.Collections;

public class AI : MonoBehaviour {
	//prefabs
	public GameObject tracePrefab;
	public GameObject initialWall;
	public GameObject FirePrefab;
	public GameObject DetonatorPrefab;
	public GameObject Blocks;
	//ray drawing
	public float dist;
	public Ray rayRight;
	public Ray rayLeft;
	public Ray rayFront;	
	public Ray raySpawnPoint;	
	//axises
	private float x,z;
	//movement directions
    private bool tagA = false;
    private bool tagW = false;
    private bool tagS = false;
    private bool tagD = false;

	public int crashCount = 0;
    
	private RaycastHit hit;
	private float distanceLeft;
	private float distanceRight;
	private float distanceForward;
	private float distanceBackward;
	//past cube positions
	private float lastCubeX;
	private float lastCubeZ;

	private string direction;

	public static bool isDead = false;

	// Use this for initialization
	void Start () 
	{
		direction = "back";
		crashCount = 0;
		dist = 2f;
		x = 1f;
		z = 0f;
		calculateDistances();
		Vector3 initialPosition = transform.Find(direction).transform.position; 
		lastCubeX = initialPosition.x;
		lastCubeZ = initialPosition.z;
	}
	void Update ()
	{
		if (Physics.Raycast(transform.position,gameObject.transform.right,dist) && !tagD && x == 1f)
		{
			calculateDistances();
			print ("right"+dist.ToString());
			direction = "left";
			forwardOrBackward();
			crashCount++;

			Object blockD = Instantiate(tracePrefab, transform.Find(direction).transform.position, Quaternion.identity);
			GameObject gBlockD = blockD as GameObject;
			lastCubeZ = gBlockD.transform.position.z;
			float D = gameObject.transform.position.x - lastCubeX;
			Vector3 scale = gBlockD.transform.localScale;
			Vector3 position = gBlockD.transform.position;
			if (D > 0)
			{	
				scale.x -= D;
				gBlockD.transform.localScale = scale;
				position.x -= D/2;
				gBlockD.transform.position = position;
			}
			else if ( D < 0)
			{
				scale.x += Mathf.Abs(D);
				gBlockD.transform.localScale = scale;
				position.x += Mathf.Abs (D/2);
				gBlockD.transform.position = position;
			}

		}

		else if (Physics.Raycast(transform.position,gameObject.transform.right*-1,dist) && !tagA && x == -1f ) 
		{

			calculateDistances();
			print ("left"+ dist.ToString());
			direction = "right";
			forwardOrBackward();
			crashCount++;
			Object blockD = Instantiate(tracePrefab, transform.Find(direction).transform.position, Quaternion.identity);
			GameObject gBlockD = blockD as GameObject;
			lastCubeZ = gBlockD.transform.position.z;
			float D = gameObject.transform.position.x - lastCubeX;
			Vector3 scale = gBlockD.transform.localScale;
			Vector3 position = gBlockD.transform.position;
			if (D > 0)
			{	
				scale.x -= D;
				gBlockD.transform.localScale = scale;
				position.x -= D/2;
				gBlockD.transform.position = position;
			}
			else if ( D < 0)
			{
				scale.x += Mathf.Abs(D);
				gBlockD.transform.localScale = scale;
				position.x += Mathf.Abs (D/2);
				gBlockD.transform.position = position;

			}

		}
		else if (Physics.Raycast(transform.position,gameObject.transform.forward,dist) && !tagW && z == 1f ) 
		{
			calculateDistances();
			print ("forward"+dist.ToString());
			direction = "back";
			leftOrRight();
			crashCount++;
			Object blockD = Instantiate(tracePrefab, transform.Find(direction).transform.position, Quaternion.identity);
			GameObject gBlockD = blockD as GameObject;
			lastCubeX = gBlockD.transform.position.x;
			float D = gameObject.transform.position.z - lastCubeZ;
			Vector3 scale = gBlockD.transform.localScale;
			Vector3 position = gBlockD.transform.position;
			if (D > 0)
			{	
				scale.z -= D;
				gBlockD.transform.localScale = scale;
				position.z -= D/2;
				gBlockD.transform.position = position;
			}
			else if ( D < 0)
			{
				scale.z += Mathf.Abs(D);
				gBlockD.transform.localScale = scale;
				position.z += Mathf.Abs (D/2);
				gBlockD.transform.position = position;
			}


		}

		else if (Physics.Raycast(transform.position,gameObject.transform.forward*-1,dist) && !tagS && z == -1f ) 
		{
			calculateDistances();
			leftOrRight();
			print ("backward"+dist.ToString());
			direction = "forward";
			crashCount++;

			//Backward

			Object blockD = Instantiate(tracePrefab, transform.Find(direction).transform.position, Quaternion.identity);
			GameObject gBlockD = blockD as GameObject;
			lastCubeX = gBlockD.transform.position.x;
			float D = gameObject.transform.position.z - lastCubeZ;
			Vector3 scale = gBlockD.transform.localScale;
			Vector3 position = gBlockD.transform.position;
			if (D > 0)
			{	
				scale.z -= D;
				gBlockD.transform.localScale = scale;
				position.z -= D/2;
				gBlockD.transform.position = position;
			}
			else if ( D < 0)
			{
				scale.z += Mathf.Abs(D);
				gBlockD.transform.localScale = scale;
				position.z += Mathf.Abs (D/2);
				gBlockD.transform.position = position;
			}
		}

		else if( Physics.Raycast(transform.position,gameObject.transform.forward*-1,dist) && Physics.Raycast(transform.position,gameObject.transform.forward,dist)
		        && Physics.Raycast(transform.position,gameObject.transform.right*-1,dist) && Physics.Raycast(transform.position,gameObject.transform.right,dist))
		{
			Die ();
		}

		Debug.DrawRay(transform.position,gameObject.transform.right*dist,Color.green);
		Debug.DrawRay(transform.position,gameObject.transform.right*-1*dist,Color.cyan);
		Debug.DrawRay(transform.position,gameObject.transform.forward*dist,Color.red);
		Debug.DrawRay(transform.position,gameObject.transform.forward*-1*dist,Color.yellow);


		#region Movement

		this.gameObject.transform.Translate(x*0.250f, 0f, z*0.250f);

		#endregion


	}

	void forwardOrBackward()
	{
		int forwardCount = 0;
		int backwardCount = 0;
		float positionZ = this.transform.position.z;
		GameObject[] cubes  =  GameObject.FindGameObjectsWithTag("cube");

		foreach (GameObject go in cubes) 
		{
			if (go.transform.position.z > positionZ)
			{
				forwardCount++;
			}
			else
			{
				backwardCount++;
			}
		}

		if (distanceForward < 2.5f) 
		{
			x = 0f;
			z = -1f;
			tagA = true;
			tagW = tagD = tagS = false;
		}

		else if (distanceBackward < 2.5f)
		{
			x = 0f;
			z = 1f;
			tagD = true;
			tagW = tagS = tagA = false;
		}

		else if (forwardCount > backwardCount) // go forward
		{
			x = 0f;
			z = 1f;
			tagD = true;
			tagW = tagS = tagA = false;
		}
		else if (backwardCount > forwardCount)// go Backward
		{
			x = 0f;
			z = -1f;
			tagA = true;
			tagW = tagD = tagS = false;
		}


	}

	void leftOrRight()
	{
		int forwardCount = 0;
		int backwardCount = 0;
		float positionX = this.transform.position.x;
		GameObject[] cubes  =  GameObject.FindGameObjectsWithTag("cube");
		
		foreach (GameObject go in cubes) 
		{
			if (go.transform.position.x > positionX)
			{
				forwardCount++;
			}
			else
			{
				backwardCount++;
			}		
		}

		if (distanceRight < 2.5f) 
		{
			x = -1f;
			z = 0f;
			tagW = true;
			tagA = tagS = tagD = false;
		}
		
		else if (distanceLeft < 2.5f)
		{
			x = 1f;
			z = 0f;
			tagS = true;
			tagW = tagA = tagD = false;	
		}

		else if (backwardCount > forwardCount) // go left
		{
			x = -1f;
			z = 0f;
			tagW = true;
			tagA = tagS = tagD = false;
		}
		else // go right
		{
			x = 1f;
			z = 0f;
			tagS = true;
			tagW = tagA = tagD = false;	
		}
						

	}

	void calculateDistances()
	{
		if (Physics.Raycast(transform.position,gameObject.transform.right, out hit, 100f))
		{
			distanceRight = hit.distance;
		}

		if (Physics.Raycast(transform.position,gameObject.transform.right*-1, out hit, 100f))
		{
			distanceLeft = hit.distance;
		}

		if (Physics.Raycast(transform.position,gameObject.transform.forward, out hit, 100f))
		{
			distanceForward = hit.distance;
		}

		if (Physics.Raycast(transform.position,gameObject.transform.forward*-1, out hit, 100f))
		{
			distanceBackward = hit.distance;
		}

	}


	void OnCollisionEnter (Collision col)
	{

		Die ();
		
	}

	void Die()
	{
		var detonation = Instantiate(DetonatorPrefab, gameObject.transform.position, Quaternion.identity);
		var explosion = Instantiate(FirePrefab,
		                            gameObject.transform.position,Quaternion.identity);
		print("hit!");
		Destroy(this.gameObject);
		isDead = true;
		
	}

}
