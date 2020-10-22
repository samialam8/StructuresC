/*
 * main.c
 *
 *  Created on: Oct 21, 2020
 *      Author: Mohammad Sami Alam
 */


#include <stdio.h>
#include <stdint.h>

void array_display(uint8_t *pArray, uint32_t nItems);
int main(void)
{
	uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};



	for(uint32_t i = 0; i < 10; i++)
	{
		someData[i] = i;

	}
	uint32_t nItems = sizeof(someData) / sizeof(uint8_t);
	array_display((someData + 2), nItems - 2); // start from 2 position
	return 0;
}

void array_display(uint8_t *pArray, uint32_t nItems)
{
	for(uint32_t i = 0; i < nItems; i++)
		{
			printf("%x\t", pArray[i]);

		}
}
