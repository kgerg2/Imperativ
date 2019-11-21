# Make the bag empty
def erase(bag):
    bag[0:] = []

# Insert one element into the bag
def insert(bag, element):
    bag.append(element)

# Insert multiple elements into the bag
def insertMultiple(bag, elements):
    bag.extend(elements)

# Remove one element from the bag and return the number of 
# same elements remaining in the bag
def pop(bag, element):
    if (bag.count(element)>0): 
        bag.remove(element)
    return bag.count(element)

# Remove every occurance of the give elemet from the bag
def removeAll(bag, element):
    for i in range(bag.count(element)):
        bag.remove(element)

# Count the number of occurences of the given element
def count(bag, element):
    return bag.count(element)

# Return true if there is no element in the bag
def isEmpty(bag):
    return len(bag)==0

# Return true if there is no free space left in the bag
def isFull(bag):
    return False

# Return the total number of elements stored currently in
# the bag
def size(bag):
    return len(bag)

# Join bags
def joinBags(bag1, bag2):
    bag1.extend(bag2);
    
bag1 = []
bag2 = []

erase(bag1)
insert(bag1,'a')
insert(bag1,'b')
insert(bag1,'a')
if (count(bag1,'a')!=2): print("Error")
pop(bag1,'a')
pop(bag1,'c')
if (count(bag1,'a')!=1 or size(bag1)!=2): print("Error")
t = ['a', 'b', 'a', 'c', 'd', 'e']
insertMultiple(bag1,t)
print(bag1)
if (isEmpty(bag1) or isFull(bag1) or size(bag1)!=8): print("Error")
if (pop(bag1,'a')!=2 or count(bag1,'a')!=2 or size(bag1)!=7): print("Error")
removeAll(bag1,'b')
if (count(bag1,'b')!=0 or size(bag1)!=5): print("Error")    

erase(bag2)
insert(bag2, 'x')
insert(bag2, 'y')
insert(bag2, 'x')

joinBags(bag1, bag2)

print(bag1)