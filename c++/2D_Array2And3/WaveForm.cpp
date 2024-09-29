//    1  2  3
//   -------->
//           |
//    4  5  6
//   <-------
//   |
//    7  8  9
//   -------->
// output 1 2 3 6 5 4 7 8 9
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows :";
    cin>>m;
    cout<<"enter no. of columns :";
    cin>>n;
    cout<<endl;
    int arr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<"enter "<<i<<","<<j<<" element :";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
           
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        if(i%2==0){
            for(int j=0 ; j<n ; j++) cout<<arr[i][j]<<" ";
        }
        else{
            for(int j=n-1;j>=0 ; j--) cout<<arr[i][j]<<" ";
        }
    }
}