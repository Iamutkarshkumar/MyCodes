a=int(input("enter 1st number "))
b=int(input("enter 2nd number "))
c=int(input("enter 3rd number "))
if(a>b and a>c):
    if(b>c):
        print(c , "is min")
    else:
        print(b,'is min')
    print(a,"is max")
elif(b>a and b>c):
    if(a>c):
        print(c , "is min")
    else:
        print(a , "is min")
    print(b , "is max")
else:
    if(b>a):
        print(a , "is min")
    else:
        print(b , "is min")
    print(c, "is max")
    
    




