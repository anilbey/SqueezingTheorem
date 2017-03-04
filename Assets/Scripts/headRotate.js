#pragma strict


function Update () {

	if (MoveAround.x==-1 && MoveAround.z==0)
	{
		transform.eulerAngles.y = 180;
	}
	else if(MoveAround.x==0 && MoveAround.z==1)
	{
		transform.eulerAngles.y = 270;
	}
	else if(MoveAround.x==0 && MoveAround.z==-1)
	{
		transform.eulerAngles.y = 90;
	}
	else if(MoveAround.x==1 && MoveAround.z==0)
	{
		transform.eulerAngles.y = 0;
	}
}