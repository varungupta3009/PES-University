#! python3
#  matrixAdder.py - Sorts a given list of elements without using built-ins.

l1 = []
l2 = []

print("Enter the first matrix:\n")
for i in range(3):
    t = input().split()
    l1.append([ int(i) for i in t ])
    
print("Enter the second matrix:\n")
for i in range(3):
    t = input().split()
    l2.append([ int(i) for i in t ])

s = [[]]
for i in range(3):
    for j in range(3):
        s[i].append(str(l1[i][j] + l2[i][j]))
    s.append([])

s.pop()

print()
for i in s:
    print("\t".join(i))
