//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1
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
        
        for (int k=1 ; k<=i ; k++){
            cout<<k<<" ";
            
        }
         for (int l=i-1; l>=1 ; l--){
            cout<<l<<" ";
            
        }
    }
}

//note:
// _ _ _ _        1  
// _ _ _      +   1 2   +   1
// _ _            1 2 3     2 1
//                1 2 3 4   3 2 1