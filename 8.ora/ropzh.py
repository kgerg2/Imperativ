my_list = [1,2,3]

def mod_list(l):
	l[:] = [11, 13, 17, 101]
	
    # l.clear()
    # l += [11, 13, 17, 101]
    
    # global my_list
    # my_list = [11, 13, 17, 101]
    
mod_list(my_list)

if (my_list == [11, 13, 17, 101]): 
    print("OK")
else:
    print("FAILURE")
