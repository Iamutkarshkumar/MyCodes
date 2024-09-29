//transpose of matrix
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
    cout<<"transpose is :"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j<m; j++){
           
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}