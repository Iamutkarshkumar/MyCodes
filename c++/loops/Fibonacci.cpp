// 1 1 2 3 5 8 13 21 34 55 
// steps 1) a=1 b=1 sum=0
// 2) sum = a+b 
// 3) a=b
// 4) b = sum 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter last digit ";
    cin>>n;
    int a=1,b=1,sum=0;
    for(int i=1;i<=n-2;i++){
        sum =a+b;
        a=b;
        b=sum;
        
        
    }
    cout<<b<<endl;
 }