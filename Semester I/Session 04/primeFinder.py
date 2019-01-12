#! python3
#  primeFinder.py - Find all the factors of a given number. Count the number of factors and check if it is prime.

n = int(input("Enter a number\n"))
if n < 2:
    if n == 1:
        print("1 is neither prime nor composite and has 1 factor (1)")
    if not n:
        print("0 is prime with 0 and 1 as its factors")
    else:
        print("Invalid Number")
    exit

fact = [1]

for i in range(2, int((n)/2)+1):
    if not n%i:
        fact.append(i)

l = len(fact)
f = "Composite"
if l == 1:
    f = "Prime"

print("The number {} is {} and has the following {} factors:".format(n, f, l+1))
for i in fact:
    print(i)
print(n)
