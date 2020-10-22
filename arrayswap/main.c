/*
 * main.c
 *
 *  Created on: Oct 21, 2020
 *      Author: Mohammad Sami Alam
 */

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);
void display_array(int32_t *pArray, uint32_t nItems);
void array_swap(int32_t *pArray1, int32_t *pArray2, uint32_t nItems1, uint32_t nItems2);



int main(void)
{
	int32_t nItems1, nItems2;
	printf("Array swapping program\n");
	printf("Enter no of elements of Array-1 and Array-2:");
	scanf("%d %d", &nItems1,&nItems2);

	if( (nItems1 < 0) || (nItems2 <0) )
	{
		printf("number of elements cannot be negative\n");
		wait_for_user_input();
		return 0;
	}

	int32_t array1[nItems1];
	int32_t array2[nItems2];

	for(uint32_t i = 0; i< nItems1; i++)
	{
		printf("Enter element %u of Array-1:", i);
		scanf("%d", &array1[i]);
	}
	for(uint32_t i = 0; i< nItems2; i++)
		{
			printf("Enter element %u of Array-2:", i);
			scanf("%d", &array2[i]);
		}
	printf("contents of array before swap \n");

	display_array(array1, nItems1);

	printf("\n");

	display_array(array2, nItems2);

	printf("\n");

	printf("contents of arrays after swap\n");

	array_swap(array1, array2,nItems1, nItems2);


	display_array(array1, nItems1);

	printf("\n");

	display_array(array2, nItems2);

	printf("\n");

	wait_for_user_input();
			return 0;
}

void display_array(int32_t *pArray, uint32_t nItems)
{
	for(uint32_t i = 0; i< nItems; i++)
	{
		printf("%4d ", pArray[i]);
	}
}

void array_swap(int32_t *pArray1, int32_t *pArray2, uint32_t nItems1, uint32_t nItems2)
{
    uint32_t len = nItems1 < nItems2 ? nItems1 : nItems2;

    for(uint32_t i = 0; i< len; i++)
    {
    	int32_t temp = pArray1[i];
    	pArray1[i] = pArray2[i];
    	pArray2[i] = temp;
    }

}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");

     while(getchar() != '\n')
     {
    	 //just read the input buffer and do nothing
     }

     getchar();
}

