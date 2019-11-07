def swap1(x, y = 0):

    temp = x   # save the value of x
    x = y      # put y into x
    y = temp   # put temp into y

def swap2(x, y = 0):

    x, y = y, x   # simultan assignment
   
def swap3(x,y):
    x, y = y, x
    return x, y
   
a = 100
b = 200
    
swap1(a, b)
swap1(y = b, x = a)
swap1(b)
    
print("a: ", a, ", b: ", b)

a = 100
b = 200
    
swap2(a, b)
swap2(y = b, x = a)
swap2(b)
    
print("a: ", a, ", b: ", b)

a, b = swap3(a, b)

print("a: ", a, ", b: ", b)    
    
## Anonymus functions    
    
# Function definition is here
sum = lambda arg1, arg2: arg1 + arg2

# Now you can call sum as a function
print("Value of total : ", sum( 10, 20 ))