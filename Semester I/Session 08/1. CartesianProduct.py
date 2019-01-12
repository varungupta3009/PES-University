set1 = {1, 2}; set2 = {3, 4, 5}
r = []
for i in set1:
	for j in set2:
		r = r + [(i, j), (j, i)]

print(set(r))
