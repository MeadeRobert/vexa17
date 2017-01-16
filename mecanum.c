#pragma config(Motor,  port1,           front_right,   tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           front_left,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           back_left,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           back_right,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	for(;;)
	{
		motor[front_right] = vexRT[Ch1] + vexRT[Ch4] - vexRT[Ch2];
		motor[front_left] =  vexRT[Ch1] + vexRT[Ch4] + vexRT[Ch2];
		motor[back_left] = vexRT[Ch1] - vexRT[Ch4] + vexRT[Ch2];
		motor[back_right] =  vexRT[Ch1] - vexRT[Ch4] - vexRT[Ch2];
	}
}