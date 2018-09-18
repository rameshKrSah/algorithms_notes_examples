/*
Being greedy for Water
You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.

Input:
First line contains one integer, T, number of test cases.
First line of each test case contains two integer, N and X, number of bottles and capacity of the container.
Second line of each test case contains N space separated integers, capacities of bottles.

Output:
For each test case print the maximum number of bottles you can fill.

Constraints:
1 < T < 100
1 < N < 10000
1 < X < 1000000000
1 < capacities of bottle < 1000000

https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/

*/

#include <iostream>
#include <algorithm>

using namespace std;


int main(void)
{

    int testCases = 0;
    int numberOfBottles = 0;
    int capacityOfContainer = 0;
    int capacitiesOfBottles [1000];

    cout << "Number of test cases : ";
    cin >> testCases;

    while(testCases--)
    {
        int maxNumberOfBottles = 0;
        int totalBottleCapacities = 0;

        cout << endl << "Number of bottles : ";
        cin >> numberOfBottles;

        cout << "Capacity of container : ";
        cin >> capacityOfContainer;

        for(int i = 0; i < numberOfBottles; i++)
        {
            cout << "Capacity of bottle " << i << " is: ";
            cin >> capacitiesOfBottles[i];
        }

        // Sort in increasing order //
        sort(capacitiesOfBottles, capacitiesOfBottles+numberOfBottles);

        for(int i = 0; i < numberOfBottles; i++)
        {
            totalBottleCapacities += capacitiesOfBottles[1];
            if(totalBottleCapacities > capacityOfContainer)
            {
                break;
            }
            maxNumberOfBottles++;
        }

        cout << endl << maxNumberOfBottles << " bottles filled from the container" <<endl;
    }

    return 0;
}
