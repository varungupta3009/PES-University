#! python 3
#  calcPerc.py - Finds and displays the sum and percentage of a set of marks

def enterMarks(n):
	while True:
		mk = input("Please enter marks for Subject {} - ".format(n))
		if not mk.isnumeric():
			print("Enter an integer please!\n")
			continue
		return(int(mk))
		break

m = []
n = int(input("Please enter the number of subjects - "))

for i in range(1, n+1):
	m.append(enterMarks(i))

s = sum(m)
p = s/5

print("Sum =", s)
print("Percentage =", p)
