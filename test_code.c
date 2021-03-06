#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_5,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_6,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           left_back,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           right_front,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           right_back,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           left_front,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           right_claw,    tmotorVex393_MC29, openLoop, encoderPort, I2C_5)
#pragma config(Motor,  port6,           left_claw,     tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_6)
#pragma config(Motor,  port7,           right_arm_lower, tmotorVex393_MC29, openLoop, encoderPort, I2C_3)
#pragma config(Motor,  port8,           right_arm_upper, tmotorVex393_MC29, openLoop, encoderPort, I2C_4)
#pragma config(Motor,  port9,           left_arm_upper, tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port10,          left_arm_lower, tmotorVex393_HBridge, openLoop, reversed, encoderPort, I2C_1)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	for(;;)
	{
		motor[right_front] = vexRT[Ch1] + vexRT[Ch4] - vexRT[Ch2];
		motor[left_front] =  vexRT[Ch1] + vexRT[Ch4] + vexRT[Ch2];
		motor[left_back] = vexRT[Ch1] - vexRT[Ch4] + vexRT[Ch2];
		motor[right_back] =  vexRT[Ch1] - vexRT[Ch4] - vexRT[Ch2];

		motor[left_arm_lower] = vexRT[Ch3Xmtr2];
	  motor[left_arm_upper] = vexRT[Ch3Xmtr2];
		motor[right_arm_lower] = vexRT[Ch3Xmtr2];
		motor[right_arm_upper] = vexRT[Ch3Xmtr2];

	  motor[left_claw] = vexRT[Ch2Xmtr2];
	  motor[right_claw] = vexRT[Ch2Xmtr2];
	}
}
