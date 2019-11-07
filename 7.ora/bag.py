storage = []

def erase():
	global strorage
	storage.clear()

def insert(char):
	global strorage
	for i, (elem, db) in enumerate(storage):
		if elem == char:
			# print(elem)
			storage[i] = (elem, db+1)
			# print((elem, db+1))
			# print(storage)
			break
	else:
		storage.append((char, 1))

def insertMultiple(chars):
	global strorage
	for char in chars:
		insert(char)

def pop(char):
	global strorage
	for i, (elem, db) in enumerate(storage):
		if elem == char:
			storage[i] = (elem, max(0, db-1))
			return storage[i][1]

def removeAll(char):
	global strorage
	for i, (elem, db) in enumerate(storage):
		if elem == char:
			storage[i] = (elem, 0)

def count(char):
	global strorage
	for elem, db in storage:
		if elem == char:
			return db

def isEmpty():
	global strorage
	return not bool(storage)

def isFull():
	global strorage
	return False

def size():
	global strorage
	return sum([db for _, db in storage])

erase();
insert('a');
insert('b');
insert('a');
if count('a')!=2:
	print("Error")
pop('a');
pop('c');
if count('a')!=1 or size()!=2:
	print("Error")
t = "abacde"
insertMultiple(t);
if isEmpty() or isFull() or size()!=8:
	print("Error")
	print(count('a'), size())
cnt = pop('a');
if cnt!=2 or count('a')!=2 or size()!=7:
	print("Error")
removeAll('b');
if count('b')!=0 or size()!=5:
	print("Error")    
