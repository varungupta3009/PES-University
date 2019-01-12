#! python3

n = int(input("Enter an order: "))
iden = []
for i in range(n):
    iden.append([0]*n)
    iden[i][i] = 1
    

low = []
upi = []

for i in range(n):
    upi.append([1]*n)
    for j in range(i):
        upi[i][j] = 0

for i in range(n):
    low.append([1]*n)
    for j in range(i+1,n):
        low[i][j] = 0

for i in iden:
    for j in i:
        print(j, end = '\t')
    print()

print()

for i in low:
    for j in i:
        print(j, end = '\t')
    print()

print()

for i in upi:
    for j in i:
        print(j, end = '\t')
    print()

print()

input()
