/*
 * SteeringAngleSensor.h
 *
 *  Created on: Oct 13, 2022
 *      Author: LYE1GA
 */

#ifndef INC_STEERINGANGLESENSOR_H_
#define INC_STEERINGANGLESENSOR_H_

#define STEERINGANGLESENSOR_HW_INTERFACE		0

extern void SteeringAngleSensor_MainTask(void);
unsigned char SteeringAngleSensor_GetValue(void);

#endif /* INC_STEERINGANGLESENSOR_H_ */
