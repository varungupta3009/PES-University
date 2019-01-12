#! python 3
#  findAreaPerimeter.py - Finds the area and the perimeter of a circle given its radius

#r = ''

"""while True:
	r = input("Please enter the radius of the circle - ")
	if not r.isnumeric():
		print("Enter a number please!\n")
		continue
	r = int(r)
	break"""

r = 20
pi = 3.1415926

print("Circumference of the circle =", 2*pi*r)
print("Area of the circle =", pi*(r**2))
