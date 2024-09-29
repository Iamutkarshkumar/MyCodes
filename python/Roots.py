#q3 calculate the roots of following equations : 1) 34x^2+68x-510=0 , 2) 2x^2-x-3=0 .
print('a quadratic equation is in the form of ax^2+bx+c=0')
a=float(input('enter the value of a:'))
b=float(input('enter the value of b:'))
c=float(input('enter the value of c:'))
root1=((-b)+((b**2)-(4*a*c))**0.5)/(2*a)
root2=((-b)-((b**2)-(4*a*c))**0.5)/(2*a)
print('the roots of the equation are :',root1,'and',root2)