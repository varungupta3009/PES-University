import pprint

def myfilter(cb, arg):
	l = []
	for i in arg:
		if not cb(i):
			l.append(i)
	return l

def plurals(arg):
	return arg[0].isdigit()

n = ['child', 'man', 'formula', '2lol', 'tooth', 'woman', 'sheep', 'foot', 'fish', 'people', 'goose', 'mouse', 'ox', 'shrimp', 'cactus', 'hippopotomus', 'radius', 'nucleus', 'index', 'wife', 'phenomenon', 'octopus', 'half', 'wolf', 'leaf', 'loaf', 'focus', 'calf', 'elf', 'fungus', 'thief', 'matrix', 'axis', 'information', 'equipment', '1lol']
print(myfilter(plurals, n))
