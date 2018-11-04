# -*- coding: utf-8 -*-
"""
Created on Sun Oct  7 16:18:58 2018

@author: Ramesh Kumar Sah

Binary Search Algorithm
"""

import numpy as np
import math as mth

# Generating a random array of size 25
arr = [1, 3, 5, 6, 77, 8, 0 , 767];
list_size = len(arr)

# Sort the array and print it
arr = np.sort(arr)
print(arr)

# Binary Search ::
def binary_search(arr, arr_size, target):
    mid_point = -1
    
    print(arr_size, arr[0])
    
    if (arr_size < 0) :
        return (None)
    
    # Two case to get the middle point; 1. arr_size is even 2. arr_size is odd
    if(arr_size % 2):
        # odd case
        mid_point = int(mth.ceil(arr_size / 2))
    else:
        mid_point = int(mth.floor(arr_size / 2))
        
    print(mid_point, arr[mid_point])
    print("-------------------")
    
    if (target == arr[mid_point]):
        return mid_point
    elif (target > arr[mid_point]):
        return binary_search(arr + mid_point, arr_size - mid_point, target)
    else:
        return binary_search(arr, arr_size - mid_point, target)
        

loc = binary_search(arr, list_size, 0)
print(loc, arr[loc])


