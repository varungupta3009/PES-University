s = input("Please enter a GP\n").split(", ")
s = [ int(i) for i in s ]
r = s[1]/s[0]
print("r =", r)
gpSum = s[0]*(1-(r**len(s)))/(1-r)
print("Sum of the GP is -", gpSum)
print("Twice the last term -", 2*s[-1])
print("Sum is less than twice the last term if r=2")
