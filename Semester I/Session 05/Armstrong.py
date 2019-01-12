#! python3
#  Armstrong.py [OLD] - Check whether an entered number is an Armstrong number or not.

n = int(input())
n1 = n; i = 0
if n < 1000:
	while n1 > 0:
		i += (n1%10)**3
		n1 //= 10
	if i == n:
		print("Armstrong")
	else:
		print("Trump")
else:
	while n1 > 0:
		i += (n1%10)**4
		n1 //= 10
	if i == n:
		print("Armstrong")
	else:
		print("Trump")
