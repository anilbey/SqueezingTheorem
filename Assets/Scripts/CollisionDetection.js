#pragma strict

var dist:float;

function Start () {

	dist = 0.5f;
}

function Update () 
{
	
	Debug.DrawRay(transform.position,gameObject.transform.right*dist,Color.green);
	
	if (Physics.Raycast(transform.position,gameObject.transform.right,dist))
	{
		MoveAround.dead = true;
		print("birseye carpti"+dist);
	}

}