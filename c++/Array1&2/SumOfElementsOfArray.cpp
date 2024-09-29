//sum of all the elements of array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<=(n-1) ; i++){
        cout<<"enter value " <<i<<" index element :" ;
        cin>>arr[i];
    }
    cout<<"entered array is : "<<endl;
    for(int i=0 ; i<=(n-1) ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0 ; i<=(n-1) ; i++){
        sum+=arr[i];
    }
    cout<<"sum is :"<<sum;
    
    

}