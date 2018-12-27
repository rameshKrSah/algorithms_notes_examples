# Karatsuba Algorithm
Karatsuba algorithm is a fast multiplication algorithm that uses a divide and conquer appraoch to multiply two numbers.
The naive algorithm for multiplying two numbers has a running time of O(n^2) while this algorithm has a running time 
of O(n^1.585). The point of the Karatsuba algorithm is to break large numbers down into smaller numbers so that any 
multiplication that occur happen on smaller numbers. Karatsuba can be used to multiply numbers in all base systems.

To multiply two n-bit numbers, *x* and *y*, the Karatsuba algorithm performs three multiplications and a few additions, 
and shifts on smaller numbers that are roughly half the size of the original *x* and *y*. Here is how the Karatsuba 
method works to multiply two n-bit numbers x and y which are in base *b*.

Create the following threee subproblems where ***H*** represents the high bits and ***L*** represents the lower bits.

- a = XH * YH
- d = XL * YL
- e = (XH + XL)(YH + YL) - a - d
- x * y = a * (b^n) + e * (b ^ (n / 2)) + d

This only requires three multiplication and has the recurrence. Karatsuba can be applied recursively to a number untill 
the numbers being multiplied are only a single digit. 
