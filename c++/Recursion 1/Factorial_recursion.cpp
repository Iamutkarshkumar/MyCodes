#include<iostream>
using namespace std;
int product=1;
int fact(int n){
    if(n==0) return product;
    product*=n;
    fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}