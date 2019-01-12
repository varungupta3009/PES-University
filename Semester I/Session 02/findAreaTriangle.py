#! python 3
#  findAreaTriangle.py - Finds and displays the area of a triangle given its 3 sides

def enterSides(n):
	while True:
		s = input("Please enter Side {} - ".format(n))
		if not s.isnumeric():
			print("Enter an integer please!\n")
			continue
		return(int(s))
		break

s1 = enterSides(1)
s2 = enterSides(2)
s3 = enterSides(3)

s = (s1 + s2 + s3)/2
area = (s*(s-s1)*(s-s2)*(s-s3))**(1/2)

print("Area of the triangle =", area)
