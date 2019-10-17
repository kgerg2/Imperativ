import sys
import string

uj = dict(zip("aeiou", "eioua"))
table = [uj.get(chr(i), chr(i)) for i in range(256)]

def csere(c):
	if c in uj:
		return uj[c]
	return c

for sor in sys.stdin:
	for c in sor:
		print(table[ord(c)], end="")

