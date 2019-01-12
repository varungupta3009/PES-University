#! python3
#  checkPerfectNumber.py - Check whether an entered number is a Perfect Number or not.

n = int(input("Enter a number:\n"))
s = 0
for i in range(1, int(n/2)+1):
	if not n%i:
		s += i
if s == n:
	print(n, "is a perfect number!")
else:
	print(n, "isn't a perfect number. But it's OK, not everybody is perfect!")
