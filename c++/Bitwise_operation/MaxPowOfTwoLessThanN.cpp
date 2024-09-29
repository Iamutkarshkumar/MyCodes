#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int n;
    int temp;
    cin>>n;
    while(n>0){
        count++;
        temp=n;
        n=(n&(n-1));
        
    }
    cout<<"no. of set bits :"<<count<<endl;
    cout<<"max pow of two less than n :"<<temp;
}