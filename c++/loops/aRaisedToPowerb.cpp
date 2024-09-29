#include<iostream>
using namespace std; 
int main(){
    int a,b;
    cout<<"enter base ";
    cin>>a;
    cout<<"enter exponent ";
    cin>>b;
    int product = 1;
    for(int i=1; i<=b; i++){
       product=product*(a);
        
    }
    cout<<a<<" raised to power "<<b<<" is "<<product<<endl; 
}
