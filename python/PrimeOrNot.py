def is_prime(n):
    if n<=1:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
        else:
            return True
a=int(input("enter number :"))
if is_prime(a):
    print(a, "is a prime number.")
else:
    print(a, "is not a prime number.")