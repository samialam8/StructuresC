/*
 * main.c
 *
 *  Created on: Oct 21, 2020
 *      Author: Mohammad Sami Alam
 */

#include<stdint.h>
#include<stdio.h>

struct DataSet
{
	char data1;
	int data2;

};

int main(void)
{
	struct DataSet data;
	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	printf("Before : data.dat1 = %X\n",data.data1);

	struct DataSet *pData;

	pData = &data;
	pData -> data1 = -0x55;

	printf("After : data.dat1 = %X\n",data.data1);
	return 0;
}
