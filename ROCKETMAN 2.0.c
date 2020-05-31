#pragma config(Sensor, dgtl1,  Ignition,       sensorTouch)
#pragma config(Sensor, dgtl2,  Button,         sensorTouch)
#pragma config(Sensor, dgtl3,  E_Stop,         sensorTouch)
#pragma config(Motor,  port9,           Booster,       tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	wait (1);

	while(69 == 69)
	{
		if(SensorValue[Ignition] == 1)
	//while(SensorValue[Ignition])
		{
			setMotor(Booster, -30);
			wait(1.3);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 15);
			wait(.4);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, -30);
			wait(.5);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 15);
			wait(.4);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, -30);
			wait(.45);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 15);
			wait(.4);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, -30);
			wait(.45);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 15);
			wait(.4);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, -30);
			wait(.45);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 15);
			wait(.4);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, -30);
			wait(.45);
			stopMotor(Booster);
			wait(1);
			setMotor(Booster, 10);
			wait(2.1);
			stopMotor(Booster);

		}
		else if(SensorValue[Button] == 1)
			{
			wait1Msec(80);  // Rest
			playTone(220,12);  wait1Msec(150);
			playTone(247,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(294,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,24);  wait10Msec(30);
			playTone(311,12);  wait10Msec(15);
			playTone(247,12);  wait10Msec(15);
			playTone(311,24);  wait10Msec(30);
			playTone(294,12);  wait10Msec(15);
			playTone(233,12);  wait10Msec(15);
			playTone(294,24);  wait10Msec(30);
			playTone(220,12);  wait10Msec(15);
			playTone(247,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(294,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(392,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(392,48);  wait10Msec(60);
			wait10Msec(8);  // Rest
			playTone(220,12);  wait10Msec(15);
			playTone(247,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(294,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,24);  wait10Msec(30);
			playTone(311,12);  wait10Msec(15);
			playTone(247,12);  wait10Msec(15);
			playTone(311,24);  wait10Msec(30);
			playTone(294,12);  wait10Msec(15);
			playTone(233,12);  wait10Msec(15);
			playTone(294,24);  wait10Msec(30);
			playTone(220,12);  wait10Msec(15);
			playTone(247,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(294,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(392,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(262,12);  wait10Msec(15);
			playTone(330,12);  wait10Msec(15);
			playTone(392,48);  wait10Msec(60);
			wait10Msec(8);  // Rest
			playTone(330,12);  wait10Msec(15);
			playTone(370,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(523,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(523,24);  wait10Msec(30);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(330,12);  wait10Msec(15);
			playTone(370,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(523,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(523,24);  wait10Msec(30);
			playTone(494,48);  wait10Msec(60);
			wait10Msec(8);  // Rest
			playTone(330,12);  wait10Msec(15);
			playTone(370,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(523,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(523,24);  wait10Msec(30);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(330,12);  wait10Msec(15);
			playTone(370,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(494,12);  wait10Msec(15);
			playTone(415,12);  wait10Msec(15);
			playTone(494,24);  wait10Msec(30);
			playTone(523,12);  wait10Msec(15);
			playTone(440,12);  wait10Msec(15);
			playTone(523,24);  wait10Msec(30);
			playTone(494,48);  wait10Msec(60);
			wait10Msec(8);  // Rest
			wait10Msec(8);  // Rest
			playTone(440,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(587,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(659,24);  wait10Msec(30);
			playTone(622,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(622,24);  wait10Msec(30);
			playTone(587,8);  wait10Msec(15);
			playTone(466,8);  wait10Msec(15);
			playTone(587,24);  wait10Msec(30);
			playTone(440,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(587,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(880,8);  wait10Msec(15);
			playTone(784,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(784,48);  wait10Msec(60);
			wait10Msec(8);  // Rest
			playTone(440,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(587,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(659,24);  wait10Msec(30);
			playTone(622,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(622,24);  wait10Msec(30);
			playTone(587,8);  wait10Msec(15);
			playTone(466,8);  wait10Msec(15);
			playTone(587,24);  wait10Msec(30);
			playTone(440,8);  wait10Msec(15);
			playTone(494,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(587,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(523,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(880,8);  wait10Msec(15);
			playTone(831,8);  wait10Msec(15);
			playTone(659,8);  wait10Msec(15);
			playTone(831,8);  wait10Msec(15);
			playTone(988,8);  wait10Msec(15);
			playTone(880,48); wait10Msec(60);
		}
	else
	{
	}
}}