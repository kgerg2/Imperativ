import sys
import string
import itertools
"""
def init():
	global uj, table
	uj = dict(map(lambda x: (x[0], x[1]), sys.argv[1:]))
	table = [uj.get(chr(i), chr(i)) for i in range(256)]

init()

def csere(c):
	if c in uj:
		return uj[c]
	return c

for sor in sys.stdin:
	for c in sor:
		if c == "0":
			raise SystemExit
		print(table[ord(c)], end="")
"""
print("".join([dict(map(lambda x: (x[0], x[1]), sys.argv[1:])).get(i, i) for i in input()]))
