//Assignment | Binary search - 1 | Week 10 pw skills
// Q4
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {1,2,2,3,4,5};
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            if(arr[mid-1]!=mid-1 && arr[mid+1]==mid+1){
                cout<<mid;
                flag=true;
                break;
            }
        }  
        if(arr[mid-1]==mid-1 && arr[mid+1]==mid+1){
            hi=mid-1;
        }
        else lo=mid+1;
    }
    if(flag==false){
        cout<<hi;
    }
        
    
}      
        
        
       