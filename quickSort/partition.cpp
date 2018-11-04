#include <iostream>
#include <vector>

using namespace std;

int partition(vector <int> & arr, int low, int high)
{
    int j = high;  // the last position in the array
    int i = low;
    int temp = 0;
   
//    cout << "Low " << low << " High " << high << endl;

    // picking the first element as the pivot
    int pivot = arr[i];
    
    // swap the pivot and the last element
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j--;
    
    // swapping of elements to make elments to the left lesser than pivot and elements to the right greater than pivot
    // this for loop is more efficient than this while loop, while(i < j)
    for(;;)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        
        while(arr[j] > pivot)
        {
            j--;
        }
        
        if(i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        else
        {
            break;
        }
    }
    
    // finally put the pivot at the right position
    temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;

    return i;
}

void quick_sort(vector <int> & list, int low, int high)
{
	if(high < low || low > high)
	{
		return;
	}
/*
	cout<<"Before Partition :: ";
	for(int i = low; i <= high; i++)
	{
	    cout << list.at(i) << "\t";
	}
	cout << endl;
*/	
	int pivot = partition(list, low, high);
/*	
	cout << "Pivot at " << pivot << endl;	
	cout<<"After Partition :: ";
	for(int i = low; i <= high; i++)
	{
	    cout << list.at(i) << "\t";
	}
	cout << endl;
*/	
	quick_sort(list, low, pivot - 1);
	quick_sort(list, pivot + 1, high);
}

int main() {
    vector <int> ar = {42, 27, 24, 47, 37, 16, 3, 91, 79, 11, 17, 89, 65, 55, 18, 54, 55, 58, 47, 70, 75, 56, 89, 37,  8, 11,
       95, 44, 92};
    
	cout<<"Before Sorting:: ";
	for(int i = 0; i < ar.size(); i++)
	{
	    cout << ar.at(i) << "\t";
	}
	cout << endl;
	
	quick_sort(ar, 0, ar.size() - 1);

	cout<<"After Sorting :: ";
	for(int i = 0; i < ar.size(); i++)
	{
	    cout << ar.at(i) << "\t";
	}
	cout << endl;
	
	return 0;
}
