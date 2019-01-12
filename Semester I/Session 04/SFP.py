n = int(input("Enter any number less than 2^100\n"))
sq = [ i**2 for i in range(0,1001) ]
fb = [0, 1]
for i in range(998):
    fb.append(fb[-1]+fb[-2])
po = [ 2**i for i in range(0,100) ]

if n in sq:
    print("Perfect Square!")

if n in fb:
    print("Fibonacci Number!")

if n in po:
    print("Perfect Power of 2!")
