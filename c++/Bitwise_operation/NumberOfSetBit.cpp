#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    cout<<count;
}