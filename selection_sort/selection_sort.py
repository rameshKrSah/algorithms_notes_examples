# -*- coding: utf-8 -*-
"""
Created on Sun Oct  7 15:55:36 2018

@author: Ramesh Kumar Sah

Selection Sort
"""

import numpy as np

# Generating a random array of size 25
arr = np.random.randint(0, 1000, 25);

# Unsorted list 
print("Unsorted list")
print(arr)

arr = np.sort(arr)
print(arr)

list_size = len(arr) - 1
sorted_index = 0;
unsorted_index = 0;
current_minimum = arr[unsorted_index]
current_position = unsorted_index

# Sorting here ::
for i in range(0, list_size):
    for j in range(unsorted_index, list_size):
        if(current_minimum > arr[j]):
            current_minimum = arr[j]
            current_position = j
            
    # swap the data elements
    arr[current_position] = arr[sorted_index]
    arr[sorted_index] = current_minimum
    
    # change the counter and indexes
    sorted_index += 1
    unsorted_index += 1
    
    # make current position and minimum equal to reset values
    current_minimum = arr[unsorted_index]
    current_position = unsorted_index
   
# Showing the results
print("Sorted list")
print(arr)

    
