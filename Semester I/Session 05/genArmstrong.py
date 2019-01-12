#! python3
#  genArmstrong.py - Generates a sequence of Armstrong numbers for a given range [3 digits only!]

a, b = input("Enter a Range [3 Digits Only]:\n").split()
a, b = [ int(a), int(b) ]

print("\nThe Armstrong Numbers found in the specified range are:\n")

for i in range(a, b+1):
    s = 0; t = i
    while t > 0:
        s += (t%10)**3
        t //= 10
    if s == i:
        print(s)

input()
