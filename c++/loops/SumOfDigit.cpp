#include<iostream>
using namespace std; 
int main(){
    int n,a;
    cout<<"enter no. ";
    cin>>n;
    int sum=0;
    a=n;
    while(n>0){
       int lastdigit= n%10;
        sum+=lastdigit;
        n/=10;
    
        

    }
if(a==0) cout<<0<<endl;
else cout<<sum<<endl;
}
