#pragma config(Sensor, dgtl1,  Ignition,       sensorTouch)
#pragma config(Motor,  port1,           Booster,       tmotorVex269_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	wait (1);

	while (69 == 69){

	while (SensorValue[Ignition] == 1)
	{
		setMotor(Booster, -30);
		wait(1);
		stopMotor(Booster);
		wait(1);
		setMotor(Booster, 30);
		wait(.7);
		stopMotor(Booster);
	}

}}