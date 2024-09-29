// C++ Assignments | Recursion - 2 | Week 11
// Ques 2: Print index of a given element in an array. If not present, print -1.
#include<iostream>
using namespace std;
int search(int arr[], int n ,int idx,int s){
   if(idx == n) {
    return -1;
    }
    if(arr[idx] == s) {
    return idx;
    }
    search(arr, n, idx+1, s);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s;
    cout<<"enter number whose index is needed: ";
    cin>>s;
    cout<<search(arr,n,0,s);

    
}