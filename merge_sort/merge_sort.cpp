#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void merge(vector <int> & list, int low, int mid, int high)
{
	// get the length of the left and right part
	int left_length = mid - low + 1;
	int right_length = high - mid;
	
	// create two temporary arrays //
	vector <int> left_list;
	vector <int> right_list;

	left_list.resize(left_length);
	right_list.resize(right_length);

	// copy the data to the temporary lists
	int i = 0;
	int j = 0;
	for (i; i < left_length; i++)
	{
		left_list[i] = list[low + i];
	}

	for (j; j < right_length; j++)
	{
		right_list[j] = list[mid + 1 + j];
	}

	i = 0;
	j = 0;
	int	k = low;

	// copy the two arays in the original array :: Two finger algorithm
	while (i < left_length && j < right_length)
	{
		if (left_list[i] > right_list[j])
		{
			list[k] = right_list[j];
			j++;
		}
		else
		{
			list[k] = left_list[i];
			i++;
		}
		k++;
	}

	while(i < left_length)
	{
		list[k] = left_list[i];
		i++;
		k++;
	}

	while(j < right_length)
	{
		list[k] = right_list[j];
		j++;
		k++;
	}
}

void merge_sort(vector <int> &list, int low, int high)
{
	// base case is that there is only one element i.e., low = high for both the left half and the right half
	if (low == high)
	{
		//cout << list.at(low) << endl;
		return;
	}

	// first part is to divide the given list untill only one element is left in the list 
	int mid = (low + high) / 2;

	// 0 to mid is the left half, and mid + 1 to size is the right half 
	merge_sort(list, low, mid);
	merge_sort(list, mid + 1, high);
	
	// merge the two lists 
	merge(list, low, mid, high);

	/*
	# Without creating two temporary arrays, inplace swapping. Works but does redundant swapping
	int i = low;
	int j = mid + 1;
	for (;;)
	{
		if (list[i] > list[j])
		{
			int temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
	
		i++;
		if (i == j)
		{
			i = low;
			j++;
		}
		
		if (j > high)
		{
			break;
		}
	}
	*/
}

int main()
{
	// first part is to divide the array //
	vector <int> list = { 'A', 46, 78, 51, 87, 1, 6, 8, 444, 223232, 3434, 45465, 5454545 };

	cout << "Before Sorting " << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << "\t";
	}
	cout << endl;

	merge_sort(list, 0, list.size() - 1);

	cout << "After Sorting " << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << "\t";
	}
	cout << endl;
	return 0;
}
