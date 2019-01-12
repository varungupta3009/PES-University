s = ""
while not s.isalpha() and len(s)!=4:
	s = input("Please enter a string with exactly 4 alphabetical characters\n")

s = list(s)
s[0] = chr(ord(s[0])+1)
s[1] = chr(ord(s[1])+1)
s[2] = chr(ord(s[2])+1)
s[3] = chr(ord(s[3])+1)
s = "".join(s)
print(s)
