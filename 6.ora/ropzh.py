lista1 = [1,2,3,4]
lista2 = [10,10,10]
lista3 = [0,0]

lista1[1:1] = lista2[:2]
lista1[4:5] = lista3[:1]*3

print(lista1)

# [1,10,10,2,0,0,0,4]
