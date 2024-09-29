#include<iostream>
using namespace std; 
int main(){
    int n,a;
    cout<<"enter no. ";
    cin>>n;
    int count=0;
    a=n;
    while(n>0){
        n=n/10;
        count+=1;
        

    }
if(a==0) cout<<1<<endl;
else cout<<count<<endl;

}
