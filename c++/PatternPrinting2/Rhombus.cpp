//       * * * *
//     * * * *
//   * * * *
// * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    for(int i=1; i<=n ; i++){
        cout<<endl;
        for (int j=1 ; j<=n-i ; j++){
            cout<<" "<<" ";
        }
        for (int j=1 ; j<=n ; j++){
            cout<<"*"<<" ";
        }
    }
}
//note:
// _ _ _ _        * * * *  
// _ _ _      +   * * * *
// _ _            * * * *
//                * * * *