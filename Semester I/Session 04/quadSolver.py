#! python3
#  quadSolver.py - Solves a quadratic equation given 2 co-efficients and one constant

a, b, c = input("Enter the 3 co-efficients\n").split()
a, b, c = [float(a), float(b), float(c)]
d = b*b-4*a*c
if d>0:
    r1 = (-b+(d**0.5))/(2*a)
    r2 = (-b-(d**0.5))/(2*a)
    print("The roots are real and distinct:", r1, r2)
elif not d:
    print("The roots are real and equal:", -b/(2*a))
else:
    real = -b/(2*a)
    imag = (-d**0.5)/(2*a)
    r1 = real + imag
    r2 = real - imag
    print("Roots are imaginary:", r1, r2)
