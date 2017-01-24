#include "Vex_Competition_Includes.c"
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


// --------------------------------------------

void pre_auton()
{
}

task autonomous()
{

task usercontrol()
{

	while(true)
	{
		// get user input
		userDrive();
		moveClaw();

		// toggle forward direction
		if(vexRT[Btn8D] == 1)
		{
			if(btn8_toggle == false)
			{
				forwardDirection *= -1;
			}
			btn8_toggle = true;
		}
		else
		{
			btn8_toggle = false;
		}

		updateSensorValues();
	}
}
