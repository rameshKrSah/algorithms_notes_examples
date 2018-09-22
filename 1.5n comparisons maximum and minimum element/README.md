  # Write an algorithm that selects both the maximal element and the minimal element from an array arr of arrSize elements, using only 1.5 * arrSize comparisons.

    - If the array has odd number of elements, repeat one element other than the first and last element one more
        time in the array and make the new array size arrSize + 1. If the array has even number of elements, do nothing.

    - Make (arrSize / 2) pairs and compare the elements of pairs, and put the larger element in one array, say highArr,
        and the smaller element in another array, say lowArr. Here a total of (arrSize / 2) comparisons will be done.

    - Find the largest element in the highArr using comparisons (arrSize / 2), that will be the maximal element in the array.

    - Find the smallest element in the lowArr using comparisons (arrSize / 2), that will be the minimal element in the array.

    - Total number of comparisons will be = (arrSize/2) + (arrSize/2) + (arrSize/2) = 1.5 * arrSize.
