a=input("enter string")
countupper=0
countlower=0
countdigit=0
for i in a:
    if i.isupper():
        countupper+=1
    elif i.islower():
        countlower+=1
    elif i.isdigit():
        countdigit+=1
print(countupper)
print(countlower)
print(countdigit)