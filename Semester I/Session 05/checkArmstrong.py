#! python3
#  checkArmstrong.py - Check whether an entered number is an Armstrong number or not [3 digits only!]

n = int(input("Enter a Number that is either 3 or 4 digits:\n"))
s = 0; t = n #Sum and Temp variables

if 999 < t < 10000:
    while t > 0:
        s += (t%10)**4
        t //= 10

elif 99 < t < 1000:
    while t > 0:
        s += (t%10)**3
        t //= 10

else:
    print("You have entered an Invalid Number")

if s == n:
    print("The number {} is an Armstrong Number".format(n))
else:
    print("The number {} is not an Armstrong Number".format(n))

input()
