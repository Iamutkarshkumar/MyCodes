#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q; 
    stack<int> st; 
    int k=2;
    int x;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int n=q.size();
    for(int i=1;i<=k;i++){
        x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()!=0){
        x=st.top();
        q.push(x);
        st.pop();
    }
    for(int i=1;i<=n-k;i++){
        x=q.front();
        q.pop();
        q.push(x);
    }
    while(n--){
        x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}