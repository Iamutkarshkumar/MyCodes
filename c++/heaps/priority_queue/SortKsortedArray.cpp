#include<iostream>
#include<queue>
using namespace std;
int main(){
    //test case 1
    // int arr[]={6,5,3,2,8,10,9};
    // int k=3;

    testcase 2
    int arr[]={10,9,8,7,4,70,60,50};
    int k=4;
    vector<int> ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}