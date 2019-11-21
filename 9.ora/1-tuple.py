thistuple = ("apple", 100, 12.48, True)

print(thistuple)

# can not be changed
# thistuple[2] = 3.47
print(thistuple[2])

newtuple = tuple((thistuple[0], thistuple[1], 3.47, thistuple[3]))

for x in newtuple:
  print(x)

bevasarlo = [("alma", 3), 
             ("liszt", 2), 
             ("tej", 4), 
             ("cukor", 1)]
