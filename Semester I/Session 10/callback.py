def mymap(cb, arg):
	l = []
	for i in arg:
		l.append(cb(i))
	return l

def callback(arg):
	return arg**2

n = 100
print(mymap(callback, range(1, n+1, 2)))
