#include <bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    if(b%2==0){
        return pow(a,b/2)*pow(a,b/2);
    }
    else return pow(a,b/2)*pow(a,b/2)*a;

}
int main(){
   int a,b;
   cout<<"enter base : ";
   cin>>a;
   cout<<"enter exponent : ";
   cin>>b;
   cout<<endl;
   cout<<a<<" raised to power "<<b<<" is: "<<pow(a,b);
}