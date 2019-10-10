from inspect import signature

def hello():
    print("Hello World")

def long_sleep(weekday, vacation):
    return not weekday or vacation

def makes10(a, b):
    return a == 10 or b == 10 or a + b == 10

def sum_double(a, b):
    # return (a+b) * (2 if a==b else 1)
    return (a+b) * (1 + a==b)

def not_string(str):
    return str if str[:3] == "not" else "not " + str

def randi_fashion(a, b):
    #return 0 if min(a, b) <= 2 else 2 if max(a, b) >= 8 else 1
    return (min(a, b) > 2) * (2 if max(a, b) >= 8 else 1)

fuggvenyek = list(filter(lambda x: x[0][0] != '_', globals().items()))
tipusok = {"long_sleep": bool, "makes10": int, "sum_double": int, "randi_fashion": int}

print("A definiált függvények:")
for ssz, fv in enumerate(fuggvenyek):
    print("{}: {}".format(ssz, fv[0]))

while True:
    fv = fuggvenyek[int(input("Add meg a választott függvény sorszámát:"))]
    tipus = None
    if fv[0] in tipusok:
        tipus = tipusok[fv[0]]
    parameterek = []
    for p in signature(fv[1]).parameters:
        if tipus:
            parameterek.append(tipus(input(p + ": ")))
        else:
            parameterek.append(input(p + ": "))
    print(fv[1](*parameterek))
