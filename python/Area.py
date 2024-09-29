#calculate the area of given circle
'''a=float(input("enter the value of radius of circle"))
area=3.14*(a**2)
print("area of circle is:",area,'units')'''
def area(r):
    return 3.14*(r**2)
a=int(input("enter radius"))
x=area(a)
print(x)