#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows ";
    cin>>n;
    // cout<<"enter number of columns ";
    // cin>>m;
    cout<<"number triangle"<<endl;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=2*i-1;j+=2){
        cout<<j<<" ";
    }}
}