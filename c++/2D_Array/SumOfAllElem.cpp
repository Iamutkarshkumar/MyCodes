#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows :";
    cin>>m;
    cout<<"enter no. of columns :";
    cin>>n;
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
    int sum= 0;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            sum+=arr[i][j];
        }
    }
    cout<<"sum is : "<<sum<<endl;
}