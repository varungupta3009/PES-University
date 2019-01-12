import pprint

def mymap(cb, arg):
	l = {}
	for i in arg:
		l[i]=cb(i)
	return l

def plurals(arg):
	return arg+'s'

n = ['child', 'man', 'formula', 'tooth', 'woman', 'sheep', 'foot', 'fish', 'people', 'goose', 'mouse', 'ox', 'shrimp', 'cactus', 'hippopotomus', 'radius', 'nucleus', 'index', 'wife', 'phenomenon', 'octopus', 'half', 'wolf', 'leaf', 'loaf', 'focus', 'calf', 'elf', 'fungus', 'thief', 'matrix', 'axis', 'information', 'equipment']
print(pprint.pprint(mymap(plurals, n)))
