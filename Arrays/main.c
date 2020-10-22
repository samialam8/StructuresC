/*
 * main.c
 *
 *  Created on: Oct 21, 2020
 *      Author: Mohammad Sami Alam
 */

#include <stdio.h>
#include <stdint.h>


int main(void)
{
	uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

	printf("contents of array element\n");

	for(uint8_t i = 0; i < 10; i++)
	{
		printf("%x\t", someData[i]);

	}
	someData[2] = 0x33;
		printf("\n");
			for(uint8_t i = 0; i < 10; i++)
				{

				   printf("%x\t", someData[i]);

				}

		printf("\n");
	for(uint8_t i = 0; i < 10; i++)
		{
		someData[i] = 0x33;
		   printf("%x\t", someData[i]);

		}

	return 0;
}
