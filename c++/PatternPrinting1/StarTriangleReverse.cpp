// * * * * 
// * * * 
// * * 
// *
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows ";
    cin>>n;
    cout<<"enter number of columns ";
    cin>>m;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n+1-i;j++){
        cout<<"*"<<" ";
    }}
    
}
//note: in this pattern we notice that
//row no. + no. of stars in each row = n+1
// therefore no. of stars in each row = n+1-i