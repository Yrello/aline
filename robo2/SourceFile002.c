#pragma config(Sensor, S2,     ,               sensorEV3_Color, modeEV3Color_Reflected_Raw)
#pragma config(Sensor, S3,     ,               sensorEV3_Color, modeEV3Color_Reflected_Raw)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
task main()
{
	while(true)
	{
		displayBigTextLine(4,"%d", SensorValue[s2]);
		displayBigTextLine(6,"%d", SensorValue[s3]);
	}

}
