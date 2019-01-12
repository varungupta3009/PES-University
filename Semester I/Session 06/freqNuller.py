#! python3
#  freqNuller.py - Sorts a given list of elements without using built-ins.

l = input("Enter a list of integers:\n").split()
l = [ int(i) for i in l ]
e = int(input("Enter the number to remove:\n"))

while e in l:
    l.remove(e)

print(l)
