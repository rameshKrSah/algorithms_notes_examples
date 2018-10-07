# Selection Sort

- **Selection Sort** is an inplace comparison sort, with O(n^2) time complexity. It generally perform worse than the
  insertion sort but is noted for its simplicity, and it has performance advantages over more complicated algorithms in
  certain situations, particularly where **auxiliary memory** is limited. 

 - The algorithm divides the input list into two parts: 
 	* The sublist of items alread sorted, which is built up from left to right at the front of the list
	* The sublist of items remaining to be sorted that occupy the rest of the list.

- Initially, the sorted subist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by
  finding the smallest (or largest, depending on the sorting order) element in the unsorted sublist, exchanging
  (swapping) it with the leftmost unsorted element and moving the sublist boundaries one element to the right.

- Worst case performance O(n^2) comparisons, O(n) swaps
- Best case performance O(n^2) comparisons, O(n) swaps
- Average case performance O(n^2) comparisons, O(n) swaps
- Worst case space complexity O(1)
