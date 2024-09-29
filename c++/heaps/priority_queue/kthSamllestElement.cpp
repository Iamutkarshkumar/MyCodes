#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={-1,2,55,90,36,7,4,0};
    int k=3;
    priority_queue<int, vector<int>, greater<int> > pq;
    for(auto x: arr){
        pq.push(x);
    }
    for(int i=1;i<k;i++){
        pq.pop();
    }
    cout<<pq.top()<<endl;
}