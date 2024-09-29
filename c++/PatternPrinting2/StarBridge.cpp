// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows";
    cin>>n;
    m=n-1;
    for(int i=1; i<=2*n-1;i++) cout<<"*"<<" ";
    for(int i=1; i<=n ; i++){
        cout<<endl;
        for (int j=1 ; j<=m+1-i; j++){
            cout<<"*"<<" ";
        }
        for (int j=1 ; j<=2*i-1 ; j++){
            cout<<" "<<" ";
        }
        for (int k=1 ; k<=m+1-i; k++){
            cout<<"*"<<" ";
        }
    }
}
// note:code after 1st line 
// * * *         _                * * *
// * *     +     _ _ _      +     * *
// *             _ _ _ _ _        *
