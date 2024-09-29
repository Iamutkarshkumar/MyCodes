// C++ Assignments | Recursion - 1 | Week 11
// Ques 3: Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    // Base case: if n is 1, it is a power of 2
    if (n == 1) {
        return true;
    }
    // If n is even, recursively check if n/2 is a power of 2
    else if (n % 2 == 0) {
        return isPowerOfTwo(n / 2);
    }
    // If n is not 1 and not even, it cannot be a power of 2
    else {
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n);
}