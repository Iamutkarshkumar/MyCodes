def greet(fx):
    def mfx(*args , **kwargs):
        print("good morning")
        fx(*args , **kwargs)
        print("thanks")
    return mfx
@greet
def hello():
    print("hello")
hello()

print()

@greet
def add(a,b):
    print(a+b)
add(1,3)