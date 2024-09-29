#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target =6;
    int n = 12;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int lo=0;
    int hi=n-1;
    bool flag =false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) {
            flag=true;
            cout<<arr[mid-1]<<endl;//lower bound
            cout<<arr[mid+1];//upper bound
            break;
            }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;   
    }
    if(flag==false) cout<<arr[hi]<<endl;//lower bound
    if(flag==false) cout<<arr[lo];//upper bound
}      
        
        
       