s = ['abc', 'abca', 'aa', 'a', 'baba', 'racecar', 'trump', 'trumpet']; c = 0
for i in s:
	if len(s)-1:
		if i[0] == i[-1]:
			c += 1

print(c)
