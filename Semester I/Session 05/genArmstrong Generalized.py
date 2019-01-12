#! python3
#  "genArmstrong Generalized.py" - Generates a sequence of Armstrong numbers for a given range.

a, b = input("Enter a Range:\n").split()
a, b = [ int(a), int(b) ]

print("\nThe Armstrong Numbers found in the specified range are:\n")

for i in range(a, b+1):
    s = 0; t = i; l = len(str(t))
    while t > 0:
        s += (t%10)**l
        t //= 10
    if s == i:
        print(s)

input()
