from random import randint
szam = randint(1, 10)
tipp = szam-1
proba = 0;
print("Add meg a szamot (1-10 kozott):")
while tipp != szam:
	tipp = int(input())
	proba += 1
	if tipp < szam:
		print("Tul kicsi.")
	if tipp > szam:
		print("Tul nagy.")
print("Eltalaltad!")
if proba == 1:
	print("Latnok vagy?")
elif proba <= 2:
	print("Szerencsed volt.")
elif proba <= 5:
	print("Szep, logikusan haladsz!")
else:
	print("Tudsz te ettol jobbat is!")
