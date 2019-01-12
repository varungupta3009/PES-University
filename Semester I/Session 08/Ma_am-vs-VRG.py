s = "qwenj4645h;dfbv/>5';.45[wf239489ewf23rwef,'7[';'78"
lc = len(s)
la = 0; ln = 0; ls = 0
for i in s:
	if i.isalnum():
		if i.isalpha():
			la += 1
		else:
			ln += 1

print(lc, la, ln, lc-la-ln)
