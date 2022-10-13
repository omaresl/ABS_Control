/*
 * Drv_TempSensor.h
 *
 *  Created on: 12 oct 2022
 *      Author: SOM5GA
 */

#ifndef INC_DRV_TEMPSENSOR_H_
#define INC_DRV_TEMPSENSOR_H_

#define DRV_TEMPSENSOR_HW_INTERFACE		0

extern void Drv_TempSensor_MainTask(void);
unsigned char Drv_TempSensor_GetValue(void);

#endif /* INC_DRV_TEMPSENSOR_H_ */
