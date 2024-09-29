//Assignment | Binary search - 1 | Week 10 pw skills
//ques 1: find last occurence of x otherwise return -1

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target =3;
    int n = 11;
    int arr[]={1,2,2,3,3,3,3,4,5,5,6};
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target) lo=mid+1;
            else{
                cout<<mid;
                break;
            }
        }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;   
    }

    }
   
        
        
              
        
       