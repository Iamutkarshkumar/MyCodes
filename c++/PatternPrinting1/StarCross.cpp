// *   *
//  * *
//   *
//  * *
// *   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n;j++){
            if(i==j || i+j==n+1) cout<<"*";
            else cout<<" ";
        
    }}
}
//note: "i==j" se ek digonal print hoga aur "i+j==n+1" se dusri digonal