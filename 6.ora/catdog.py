from re import findall
print((lambda x: len(findall("cat", x))-len(findall("dog", x))==0)(input()))
