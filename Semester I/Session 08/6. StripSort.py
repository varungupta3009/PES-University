#WAP to accept a sequence of whitespace separated word as input and print only unique words and sort them.
s = list(set(input().split()))
s = sorted(s)
print(s)
