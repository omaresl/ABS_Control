/*
 * Drv_TempSensor.c
 *
 *  Created on: 12 oct 2022
 *      Author: SOM5GA
 */
#include "Drv_TempSensor.h"

unsigned char TempSensorVal;

void Drv_TempSensor_MainTask(void)
{
	TempSensorVal = DRV_TEMPSENSOR_HW_INTERFACE;
}

unsigned char Drv_TempSensor_GetValue(void)
{
	return TempSensorVal;
}
