s = ""
while not s.isalpha() and len(s)!=4:
	s = input("Please enter a string with exactly 4 alphabetical characters\n").upper()

s = list(s)
s[0] += " - "+str(ord(s[0]))
s[1] += " - "+str(ord(s[1]))
s[2] += " - "+str(ord(s[2]))
s[3] += " - "+str(ord(s[3]))
s = "\n".join(s)
print(s)
