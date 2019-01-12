#! python3
#  checkFact.py - Check whether an entered number is a factorial of a number or not and prints its factor.

n = int(input("Enter any number:\n"))
i = 1
j = 1
while i<=n:
	i*=j
	j+=1
	if i == n:
		print("{} is a factorial of {}.".format(i, j-1))
		break
else:
	print(n, "is not a factorial number.")
