def fizzbuzz():
    a = int(input("Add meg a számot:"))
    eredm = ""
    if a % 5 == 0:
        eredm += "Fizz"
    if a % 3 == 0:
        eredm += "Buzz"
    return eredm
    