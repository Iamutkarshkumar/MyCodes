//       * 
//     * * * 
//   * * * * * 
// * * * * * * * 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;

    //METHOD 1 
cout<<"METHOD 1"<<endl;
    for(int i=1; i<=n ; i++){
        cout<<endl;
        for (int j=1 ; j<=n-i ; j++){
            cout<<" "<<" ";
        }
        for (int j=1 ; j<=2*i-1 ; j++){
            cout<<"*"<<" ";
        }
    }

    //METHOD 2
cout<<endl;
cout<<"METHOD 2"<<endl;
    int nst = 1; // number of star ko initialise kar diya
    int nsp = n-1; // number of space ko initialise kar diya
    for(int i=1; i<=n ; i++) {
        cout<<endl;
        // spaces
        for(int j=1; j<=nsp ; j++){
            cout<<" "<<" ";
        }
        nsp--;
         for(int k=1; k<=nst ; k++){
            cout<<"*"<<" ";
        }
        nst+=2;

    }
}

//note[METHOD 1]:
// _ _ _ _        *  
// _ _ _      +   * * * 
// _ _            * * * * *
//                * * * * * * *


