/*
 *
 * Insertion Sort implementaion in C
 *
 * Ramesh Kr Sah
 * Sept, 2018
 *
*/

#include <stdio.h>


void insertionSort(int * pArr, int size)
{
	int i = 1;
	int * pData = pArr;
	
	for(i; i < size; i++)
	{
		if(*(pArr + i) < *(pData))
		{
			int j = i-1;
			int k = i;

			while(j >= 0)
			{
				if(*(pArr+ j) > *(pArr + k))
				{
					// Swap the two data element 
					int swp = *(pArr + j);
					*(pArr + j) = *(pArr + k);
					*(pArr + k) = swp;
					j--;
					k--;
				}
				else
				{
					break;
				}
			}
		}
		
		for(int n = 0; n < size; n++)
		{
		    printf("%d \t", *(pArr + n));
		}
        	printf("\n");

		pData++;
	}
}

int main(void)
{
	int arr[] = {3, 4, 1, 6, 0, 8, 2, 10};
	int size = 8;

	int i = 0;

	printf("The original array is \n");
	for(i; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}

	printf("\n");

    	printf("\nStarting Insertion Sort \n");
	insertionSort(arr, size);

	printf("\nThe sorted array is \n");
	for(i = 0; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}

	printf("\n");

	return 0;
}

