//Assignment | Binary search - 1 | Week 10 pw skills
//Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target =1;
    int n = 8;
    int arr[]={0,0,0,0,0,1,1,1};
    int lo=0;
    int hi=n-1;
    int count=0;
    //FIRST OCCURRENCE
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) {
            if(arr[mid-1]==target){
                hi=mid-1;  
            } 
            else{
                count-=mid;
                break;

            }
            }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;   
    }
 
    
   //LAST OCCURRENCE
   int lo2 =0;
   int hi2 =n-1;
  while(lo2<=hi2){
        int mid2=lo2+(hi2-lo2)/2;
        if(arr[mid2]==target){
            if(arr[mid2+1]==target) lo2=mid2+1;
            else{
                count+=hi2;
                break;
            }
        }
        if(arr[mid2]<target) lo2=mid2+1;
        if(arr[mid2]>target) hi2=mid2-1;   
    }
    cout<<count+1; //NO. OF ONES = LAST OCCURRENCE - FIRST OCCURRENCE + 1
}

       
        
              
        
       