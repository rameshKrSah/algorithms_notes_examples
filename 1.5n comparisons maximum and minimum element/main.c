/*
    Write an algorithm that selects both the maximal element and the minimal element from an array arr of arrSize
    elements, using only 1.5 * arrSize comparisons.

    - If the array has odd number of elements, repeat one element other than the first and last element one more
        time in the array and make the new array size arrSize + 1. If the array has even number of elements, do nothing.

    - Make (arrSize / 2) pairs and compare the elements of pairs, and put the larger element in one array, say highArr,
        and the smaller element in another array, say lowArr. Here a total of (arrSize / 2) comparisons will be done.

    - Find the largest element in the highArr using comparisons (arrSize / 2), that will be the maximal element in the array.

    - Find the smallest element in the lowArr using comparisons (arrSize / 2), that will be the minimal element in the array.

    - Total number of comparisons will be = (arrSize/2) + (arrSize/2) + (arrSize/2) = 1.5 * arrSize.
*/

#include <stdio.h>

void main(void)
{
    int arr[] = {2, 5, 5, 3, 4, 9, 11, 0};
    int arrSize = 8;
    int arrIndex = 0;

    int highArr[100];
    int highArrIndex = 0;

    int lowArr[100];
    int lowArrIndex = 0;

    int comp = 0;

    // Comparisons in pairs //
    for(int i = 0; i < (arrSize); i = i + 2)
    {
        ++comp;
        if(arr[i] > arr[i+1])
        {
            highArr[highArrIndex++] = arr[i];
            lowArr[lowArrIndex++] = arr[i + 1];
        }
        else
        {
            highArr[highArrIndex++] = arr[i + 1];
            lowArr[lowArrIndex++] = arr[i];
        }
    }

    // Finding the maximum element in the entire array by comparisons in the highArr//
    int maxElement = highArr[0];
    for(int j = 0; j < highArrIndex; j++)
    {
        ++comp;
        if(highArr[j] > maxElement)
        {
            maxElement = highArr[j];
        }
    }

    // Finding the minimum element in the entire array by comparisons in the lowArr//
    int minElement = lowArr[0];
    for(int i = 0; i < lowArrIndex; i++)
    {
        ++comp;
        if(lowArr[i] < minElement)
        {
            minElement = lowArr[i];
        }
    }

    printf("Array size: %d\n", arrSize);
    printf("At most number of comparisons: %f\n", 1.5*arrSize);
    printf("Total comparisons done: %d\n", comp);
    printf("Smallest element: %d\n", minElement);
    printf("Largest element: %d\n", maxElement);

    return;
}
