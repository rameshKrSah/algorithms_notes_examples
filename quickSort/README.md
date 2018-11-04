# Quick Sort

A divide and conquer algorithm, that find a pivot and divides the input array into two halve such that the elements to
the left of the pivot are less than pivot and the elements to the right of the pivot is greater than the pivot. Two sub
arrays are formed with pivot as the boundary and then merge sort is called upon the two sub arrays.

Unlike the quick sort, the divide i.e., partition is hard and the merge is easy.

Best case complexity n * log(n)
Average case complexity n * log(n)
Worst case complexity n^2 :: When the input array is sorted
