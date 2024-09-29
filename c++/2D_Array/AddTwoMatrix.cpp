#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows :";
    cin>>m;
    cout<<"enter no. of columns :";
    cin>>n;
    cout<<"enter 1st matrix "<<endl;
    int arr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<"enter "<<i<<","<<j<<" element :";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"enter 2nd matrix "<<endl;
    int brr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<"enter "<<i<<","<<j<<" element :";
            cin>>brr[i][j];
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
        for(int j =0 ; j<n ; j++){
           
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            brr[i][j]=arr[i][j]+brr[i][j];
            
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
           
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}