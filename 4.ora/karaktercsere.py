#l = "uoiea"
#c = input()
#c = [x if x not in l else l[l.index(x)-1] for x in c]
#print("".join(c))

print("".join([x if x not in "uoiea" else "uoiea"["uoiea".index(x)-1] for x in input()]))
