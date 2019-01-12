#! python3
#  sortList.py - Sorts a given list of elements without using built-ins.

l = input("Enter a list of integers:\n").split()
l = [ int(i) for i in l ]

n = len(l)

for i in range(n):
    for j in range(n-i-1):
        if l[j] > l[j+1]:
            l[j], l[j+1] = l[j+1], l[j]

print(l)
