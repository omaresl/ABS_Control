/*
 * SteeringAngleSensor.c
 *
 *  Created on: Oct 13, 2022
 *      Author: LYE1GA
 */

#include "SteeringAngleSensor.h"

unsigned char SteeringAngleSensorVal;

void SteeringAngleSensor_MainTask(void)
{
	SteeringAngleSensorVal = STEERINGANGLESENSOR_HW_INTERFACE;
}

unsigned char SteeringAngleSensor_GetValue(void)
{
	return SteeringAngleSensorVal;
}
