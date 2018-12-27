from math import ceil, floor

def Karatsuba(x, y):
    if x < 10 and y < 10:
        #if both numbers are single digit return naive multiplication result
        # the base case
        return x * y

    # get the max length of the two numbers
    n = max(len(str(x)), len(str(y)))

    # get the midpoint, with ceiling
    mid = int(ceil(float(n) / 2))

    # get the lower and higher part 
    x_h = int(floor(x / 10**mid))
    x_l = int(x % (10**mid))

    y_h = int(floor(y / 10**mid))
    y_l = int(y % (10**mid))


    #recursive steps
    a = Karatsuba(x_h, y_h)

    d = Karatsuba(x_l, y_l)

    e = Karatsuba((x_h + x_l), (y_h + y_l)) - a - d

    # return the result
    return int(a * (10**(mid*2)) + e * (10**mid) + d)


print("result of 12 * 12")
print(Karatsuba(12,12))

print("result of 0 * 0")
print(Karatsuba(0,0))

print("result of 1234 * 4321")
print(Karatsuba(1234,4321))

print("result of 3141592653589793238462643383279502884197169399375105820974944592 * 2718281828459045235360287471352662497757247093699959574966967627") 
print(Karatsuba(3141592653589793238462643383279502884197169399375105820974944592,
               2718281828459045235360287471352662497757247093699959574966967627))
