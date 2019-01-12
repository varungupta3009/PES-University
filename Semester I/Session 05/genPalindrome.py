#! python3
#  genPalindrome.py - Prints all the three digit palindrome numbers.

print("All the 3 digit palindrome numbers are:\n")
i = 100
while i < 1000:
	i1 = str(i)
	if i1 == i1[::-1]:
		print(i)
	i += 1
