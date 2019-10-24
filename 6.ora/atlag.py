uj = 1
ossz = db = 0
while uj != 0:
	uj = float(input())
	if db == 0:
		minimum = maximum = uj
	else:
		if uj > maximum:
			maximum = uj
		if uj < minimum:
			minimum = uj
	ossz += uj
	db += 1
print((ossz-maximum-minimum)/(db-2));



