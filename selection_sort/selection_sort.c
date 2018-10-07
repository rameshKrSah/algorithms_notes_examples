#include <stdio.h>

void print_list(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}

	printf("\n");
}

int main(void)
{
	// unsorted list
	int arr[] = {3470,6936,6418,2313,4689,6729,3311,6284,4706,5384,5880,4312,188,4949,8352,4213,8890,2134,8560,3120,3000,2539,6939,3137,1116,1960,9598,353,4851,1388,2064,9530,6525,7093,6960,275,4415,552,6702,6044,8331,8505,8989,1530,7888,1830,9833,6509,3495,8899,8659,168,4431,623,4569,1754,9822,2694,3727,3623,8263,6859,8411,4617,7819,8782,6350,4772,5710,6277,9356,5833,5819,4852,5368,1987,1857,2100,4983,7715,1411,6843,9059,8499,2803,9322,5000,9542,1543,1466,2111,1207,921,1596,8440,53,954,3544,5119,6977};
	
	int list_size = 25;

	int unsorted_index = 0, sorted_index = 0;

	int min = arr[unsorted_index];
	int position = unsorted_index;

	printf("Unsorted list \n");
	print_list(arr, list_size);
	
	for(int i = 0; i < list_size; i++)
	{
		for(int j = unsorted_index; j < list_size; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				position = j;
			}
		}
		
		// swap the data elements //
		arr[position] = arr[sorted_index];
		arr[sorted_index] = min;

		// decrement the list sir and increment the indexes //
		unsorted_index++;
		sorted_index++;
		
		position = unsorted_index;
		min = arr[unsorted_index];
	}

	printf("Sorted list \n");
	print_list(arr, list_size);
	return 0;
}

