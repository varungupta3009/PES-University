s = [1,2,1,2,2,2,2,2,6,5,1,3]
c = {}
for i in set(s):
	c[i] = s.count(i)


print(max(c, key=c.get))
