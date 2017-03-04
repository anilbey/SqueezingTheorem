#pragma strict


var Karakter:GameObject;
var rotation:Quaternion;
var CubePrefab:Transform;
var FirePrefab:Transform;
var DetonatorPrefab:Transform;
var EnemyPrefab:Transform;

var speed:float=0.00005f;
var lastCubeX:float=0;
var lastCubeZ:float=0;
var tagA:int = 0;
var tagW:int = 0;
var tagS:int = 0;
var tagD:int = 0;
var amount:int = 8;

static var x:float = 0f;
static var z:float = 0f;
static var dead:boolean = false;

var startPositionZ:float;
var startPositionX:float;

var previousX:float;
var previousZ:float;



function Start()
{

	previousX = Input.acceleration.x;
	previousZ = Input.acceleration.z;

	lastCubeX = startPositionX = this.gameObject.transform.position.x = Random.Range(-20f,20f);
	lastCubeZ = startPositionZ = this.gameObject.transform.position.z = Random.Range(-10f,10f);
	
	Instantiate(EnemyPrefab, new Vector3(-1*startPositionX, 0f, -1*startPositionZ),Quaternion.identity);
}

function Update () 
{
	var controller : CharacterController = GetComponent(CharacterController);
	if ((Input.GetKeyDown("a") || Input.GetKeyDown(KeyCode.LeftArrow) || Input.acceleration.x < previousX - 0.15f) && x!=1f && tagA==0)
	{
		
		x=-1f;
		z=0f;
		var bulletA = Instantiate(CubePrefab,transform.Find("SpawnPoint").transform.position,Quaternion.identity);
		lastCubeX=bulletA.position.x;
		var C:float=bulletA.position.z-lastCubeZ;
		var C2:float=Karakter.transform.position.z-lastCubeZ;
		tagA=1;
		tagW=0;
		tagS=0;
		tagD=0;
		if (C2 > 0)
		{
			bulletA.localScale.z-=C2;
			bulletA.position.z-=C2/2;
		}
		else if (C2 < 0){
			bulletA.localScale.z+=Mathf.Abs(C2);
			bulletA.position.z+=Mathf.Abs(C2/2);
		}
  }
        
	else if ((Input.GetKeyDown("d") || Input.GetKeyDown(KeyCode.RightArrow) || Input.acceleration.x > previousX + 0.15f) && x!=-1f && tagD==0)
	{
		
		z=0f;
		x=1f;
		var bulletD = Instantiate(CubePrefab,transform.Find("SpawnPoint").transform.position,Quaternion.identity);
		lastCubeX = bulletD.position.x;
		var B:float = bulletD.position.z-lastCubeZ;
		tagA = 0;
		tagW = 0;
		tagS = 0;
		tagD = 1;
		if(B > 0)
		{
			bulletD.localScale.z -= B;
			bulletD.position.z -= B/2;
		}
		else if (B < 0)
		{
			bulletD.localScale.z+=Mathf.Abs(B);
			bulletD.position.z+=Mathf.Abs(B/2);
		} 
 	}    
	else if ((Input.GetKeyDown("w") || Input.GetKeyDown(KeyCode.UpArrow) || Input.acceleration.z < previousZ) && z!=-1 && tagW==0)
	{
		previousZ = Input.acceleration.z;
		z=1f;
		x=0f;
		var bulletW = Instantiate(CubePrefab,transform.Find("SpawnPoint").transform.position,Quaternion.identity);
		lastCubeZ=bulletW.position.z;
		var F:float=bulletW.position.x-lastCubeX;
		tagA=0;
		tagW=1;
		tagS=0;
		tagD=0;
		if (F > 0)
		{
			bulletW.localScale.x-=F;
			bulletW.position.x-=F/2;
		}
		else if (F < 0)
		{
			bulletW.localScale.x+=Mathf.Abs(F);
			bulletW.position.x+=Mathf.Abs(F/2);
		}
	}
	else if ((Input.GetKeyDown("s")|| Input.GetKeyDown(KeyCode.DownArrow) || Input.acceleration.z > previousX) && z!=1 && tagS==0)
	{
		previousZ = Input.acceleration.z;
		z=-1f;
		x=0f;
		var bulletS = Instantiate(CubePrefab,transform.Find("SpawnPoint").transform.position,Quaternion.identity);
		lastCubeZ=bulletS.position.z;
		var V:float=bulletS.position.x-lastCubeX;
		tagA=0;
		tagW=0;
		tagS=1;
		tagD=0;
		if (V > 0)
		{
			bulletS.localScale.x-=V;
			bulletS.position.x-=V/2;
		}
		else if (V < 0)
		{
			bulletS.localScale.x+=Mathf.Abs(V);
			bulletS.position.x+=Mathf.Abs(V/2);
		}
	}  
	Karakter.transform.Translate (x*0.2,0f,z*0.2);
	if (Input.GetKeyDown(KeyCode.T))
	{
		if (Time.timeScale == 1.0f) Time.timeScale = .1f;
		else						Time.timeScale = 1.0f;  
    }       

}

function LateUpdate()
{
	if (dead)
	{
		print("YOU LOST THE LEAD");
		var detonation = Instantiate(DetonatorPrefab, gameObject.transform.position, Quaternion.identity);
		var explosion = Instantiate(FirePrefab,
		gameObject.transform.position,Quaternion.identity);
		Destroy(gameObject);
		dead=false;
		GameObject.Find("Main Camera").tag = "lose";
	}        
	if (Input.GetKeyDown(KeyCode.R))
	{
		print("restart");
		Application.LoadLevel(0);
	}
}
