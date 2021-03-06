/*
    Example of greedy algorithm use
*/


#include <iostream>

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
    int A[] = {1, 3, 4, 6, 0, 2, 6, 9};
    int currentTime = 0;
    int numberOfThings = 0;
    int T = 6;

    cout << "Original array: ";
    for(int i = 0; i < 8; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;

    bubbleSortIncreasingOrder(A, 8);
    cout << "Sorted in decreasing order: ";
    for(int i = 0; i < 8; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;

    for(int i = 0; i < 8; i++)
    {
        currentTime += A[i];
        if(currentTime > T)
        {
            break;
        }
        numberOfThings++;
    }

    cout << "Maximum number of things that can be done in " << T << " is " << numberOfThings << endl;
    return 0;
}
