# Binary Search

- **Binary Search**, also known as **half-interval search, logarithmic search** or **binary chop** is a search algorithm
  that finds the position of a target value within a sorted array.

- Binary search compares the target value to the middle element of the array. If they are not equal, the half in which
  the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to
  compare to the target value, and repeating this untill the target value is found.

- If the search ends with the remaining half being empty, the target is not in the array. 

- Binary search runs in **logarithmic** time in the **worst case**, making O(logn) comparisons, where *n* is the number
  of elements in the array. Binary search takes constant space i.e., O(1), meaning that the space taken by the algorithm
  is the same for any number of elements in the array.

- Binary search is faster than linear search except for small arrays, but the array must be sorted first.

- There are numerous variations of binary search. In particular, fractional cascading speeds up binary searches for the
  same value in multiple arrays. Fractional cascading efficiently solves a number of search problems in computational
  geometry and in numerous other fields. Exponential search extends binary search to unbounded lists. The binary search
  tree and B-tree data structures are based on binary search.

### Ref :: https://en.wikipedia.org/wiki/Binary_search_algorithm
