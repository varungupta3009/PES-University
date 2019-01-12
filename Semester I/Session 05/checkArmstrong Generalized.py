#! python3
#  "checkArmstrong Generalized.py" - Check whether an entered number is an Armstrong number or not.

n = int(input("Enter a Number:\n"))
s = 0; t = n; l = len(str(n)) #Sum and Temp variables

while t > 0:
    s += (t%10)**l
    t //= 10

if s == n:
    print("The number {} is an Armstrong Number".format(n))
else:
    print("The number {} is not an Armstrong Number".format(n))

input()
