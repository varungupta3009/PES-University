#! python3
#  SnakesAndLadders.py - Recreates the world famous "Snakes and Ladders" grid board.

print("The Snakes and Ladders board!\n\n")
for i in range(100, 0, -10):
	if not i%20:
		for j in range(i, i-10, -1):
			print(j, end = "\t")
	else:
		for j in range(i-9, i+1):
			print(j, end = "\t")
	print()
