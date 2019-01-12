import pprint

def myfilter(cb, arg):
	l = []
	for i in arg:
		if not cb(i):
			l.append(i)
	return l

def plurals(arg):
	return arg[0]%arg[1]

n = [(2,1), (2,3), (3,1), (3,2), (3,3), (16,9), (16,4)]
print(myfilter(plurals, n))
