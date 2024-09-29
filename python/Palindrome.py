def is_palindrome(x):
    if x==x[::-1]:
        print(x, "is a palindrome.")
    else:
        print(x, "is not a palindrome.")

x = input("Enter a string: ")
is_palindrome(x)
 