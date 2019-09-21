#! python 3
#  lol.py

import datetime, os

now = datetime.datetime.now()

print("Today's date - " + now.strftime('%d %B, %Y'))

a = ''
b = [0, 1]
c = ''
for i in range(1000):
    a += 'All work and no play makes Jack a dull boy.\n'

for i in range(998):
    b.append(b[-1]+b[-2])

for i in b:
    c += str(i) + '\n'

new1 = open("lol1.txt", 'w')
new1.write(a)
new1.close()

new2 = open("lol2.txt", 'w')
new2.write("Fibonacci Sequence for the first 1000 numbers:\n" + c)
new2.close()
