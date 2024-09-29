//store roll no. and marks obtained by 4 students
//side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout>>"enter no. of students";
    // cin>>m;
    int arr[2][4];
    for(int i=0 ; i<1 ; i++){
        for(int j=0 ; j<=3;j++){
            cout<<"enter roll no.";
            
            cin>>arr[i][j];
            
        }
    }
    for(int i=1 ; i<2 ; i++){
        for(int j=0 ; j<=3;j++){
            cout<<"enter marks";
            
            cin>>arr[i][j];
            
        }
    }
    for(int i=0 ; i<=1 ; i++){
        for(int j=0 ; j<=3;j++){
            
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}