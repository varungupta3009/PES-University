#! python 3
#  sumDigits.py - Print the digits and their sum of any given integer

while True:
	n = input("Please enter a number - ")
	if not n.isnumeric():
		print("Enter an integer please!\n")
		continue
	n = int(n)
	break

s = 0
while n>0:
	d = n%10
	s = s+d
	n = n//10
	print(d)

print("Sum =", s)
