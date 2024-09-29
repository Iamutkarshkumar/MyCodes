// C++ Assignments | Recursion - 1 | Week 11
// Ques 1: Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
#include<iostream>
using namespace std;
int odd(int a,int b){
    if(a>b) return 0;
    return a+odd(a+2,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<odd(a,b);
}