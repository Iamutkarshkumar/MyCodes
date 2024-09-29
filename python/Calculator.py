def add(x,y):
    return x+y
def sub(x,y):
    return x-y
def mul(x,y):
    return x*y
def div(x,y):
    return x/y
def mod(x,y):
    return x%y
def flo(x,y):
    return x//y
def pow(x,y):
    return x**y
while True:
    print("enter your choice")
    print("enter 1 : for addition")
    print("enter 2 : for subtraction")
    print("enter 3 : for multiplication")
    print("enter 4 : for division")
    print("enter 5 : for modulus")
    print("enter 6 : for floor division")
    print("enter 7 : for power")
    
    a=int(input("enter your choice "))
    if a==1:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(add(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==2:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(sub(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==3:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(mul(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==4:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(div(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==5:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(mod(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==6:
        x=int(input("enter 1st number "))
        y=int(input("enter 2nd number "))
        print(flo(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break
    elif a==7:
        x=int(input("enter number "))
        y=int(input("enter power "))
        print(pow(x,y))
        n=input("want to use again press y/Y otherwise press any key")
        if n not in "yY":
            break