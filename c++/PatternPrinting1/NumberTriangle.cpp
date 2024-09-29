#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    cout<<"number triangle"<<endl;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=i;j++){
        cout<<j<<" ";
    }}
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    cout<<endl;
    cout<<"reverse number triangle"<<endl;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n+1-i;j++){
        cout<<j<<" ";
    }}
    
}
