/*
 * main.c
 *
 *  Created on: Oct 19, 2020
 *      Author: Mohammad Sami Alam
 */


#include <stdio.h>
#include <stdint.h>

struct CarModel
	{
		unsigned int carNumber;
		uint32_t carPrice;
		uint16_t carMaxSpeed;
		float carWeight;
	};

int main(void)
{

    struct CarModel carChevy = {2021, 15000, 220, 1330};
    
    printf("size of struct model is %I64u\n", sizeof(struct CarModel));

    /*carChevy.carNumber = 1000;//to change data given

   printf("Deatils of car:\n");
   printf("carNumber = %u\n", carChevy.carNumber);
   printf("carPrice = %u\n", carChevy.carPrice);
   printf("carMaxSpeed = %u\n", carChevy.carMaxSpeed);
   printf("carWeight = %lf\n", carChevy.carWeight);*/
    return(0);
}
