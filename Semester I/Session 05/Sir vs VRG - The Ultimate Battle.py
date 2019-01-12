#! python3
#  "Sir vs VRG - The Ultimate Battle.py" - Tests our ICUP professor's logic against mine.

import time
i = 100
l = []
a = time.time()
while i < 1000:
	i1 = str(i)
	if i1 == i1[::-1]:
		l.append(i)
	i += 1
print(time.time()-a)
l = []
a = time.time()
for i in range(1,10):
	for j in range(10):
		l.append("".join([str(i), str(j), str(i)]))
print(time.time()-a)
