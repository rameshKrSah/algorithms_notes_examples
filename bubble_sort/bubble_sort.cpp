/*
    Bubble sort :

    Bubble sort, also called Sinking sort, is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

    Best case performance = O(n) comparisons, and O(1) swaps
    Worst case performance = O(n^2) comparisons, and O(n^2) swaps
    Average case performance = O(n^2) comparisons, and O(n^s) swaps
*/


#include <iostream>
#include "bubble_sort.h"

using namespace std;

void bubbleSortIncreasingOrder(int * pArr, int length)
{
    int * pTr = pArr;
    int swaps = 0;

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length - 1; j++)
        {
            if(*(pTr + j) > *(pTr + j + 1))
            {
                int temp = *(pTr + j);
                *(pTr + j) = *(pTr + j + 1);
                *(pTr + j + 1) = temp;
                swaps++;
            }
        }

        if(!swaps)
        {
            // If no swaps in one whole pass, then the array is already sorted //
            break;
        }
    }
}

void bubbleSortDecreasingOrder(int * pArr, int length)
{
    int * pTr = pArr;
    int swaps = 0;

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length - 1; j++)
        {
            if(*(pTr + j) < *(pTr + j + 1))
            {
                int temp = *(pTr + j);
                *(pTr + j) = *(pTr + j + 1);
                *(pTr + j + 1) = temp;
                swaps++;
            }
        }

        if(!swaps)
        {
            // If no swaps in one whole pass, then the array is already sorted //
            break;
        }
    }
}

int main(void)
{
    return 0;
}
