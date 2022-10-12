/*
 * EventCounter.c
 *
 *  Created on: 12 oct 2022
 *      Author: SOM5GA
 */

static unsigned int EventCounterVariable = 0;

void EventCounter(void)
{
	EventCounterVariable++;
}

unsigned int EventCounter_GetValue(void)
{
	return EventCounterVariable;
}
