#include <iostream>
#include "bubble_sort.h"

using namespace std;


int main(void)
{
    int A[] = {1, 3, 4, 6, 0, 2, 6, 9};

    cout << "Original array: ";
    for(int i = 0; i < 8; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;

    bubbleSortDecreasingOrder(A, 8);
    cout << "Sorted in decreasing order: ";
    for(int i = 0; i < 8; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;

    bubbleSortIncreasingOrder(A, 8);
    cout << "Sorted in increasing order: ";
    for(int i = 0; i < 8; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;

    return 0;
}
