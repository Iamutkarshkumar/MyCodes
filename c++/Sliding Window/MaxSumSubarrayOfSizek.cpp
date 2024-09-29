#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,3,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int sum=0;
    int maxIdx=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxSum=sum;

    //sliding window 

    int i=1;
    int j=k;
    while(j<n){
        int currSum=sum-arr[i-1]+arr[j];
        if(currSum>maxSum){
            maxSum=currSum;
            maxIdx=i;
        }
        sum=currSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
}