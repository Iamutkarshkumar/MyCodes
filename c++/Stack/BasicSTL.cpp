#include<iostream>
#include<stack>
using namespace std;
void Print(stack<int>& s){
    while(s.size()>0){
        
        cout<<s.top()<<endl;
        s.pop();
        
    }
}
void pushAtBottom(stack<int>& st,int val){
    stack<int> helper;
    
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
void pushAtIdx(stack<int>& st,int idx,int val){
    stack<int> helper;
    
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
// void pushAtIdx(stack<int>& st,int idx,int val){
//     int size = st.size();
//     stack<int> helper;
//     for(int i=0;i<(size-idx);i++){
//         helper.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(helper.size()>0){
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// void pushAtIdx(std::stack<int>& st, int idx, int val) {
//     std::stack<int> helper;
//     int size = st.size();
    
//     // Move elements to helper stack until the index is reached
//     for (int i = 0; i < (size - idx); ++i) {
//         helper.push(st.top());
//         st.pop();
//     }
    
//     // Push the new value
//     st.push(val);
    
//     // Move elements back from the helper stack to the original stack
//     while (!helper.empty()) {
//         st.push(helper.top());
//         helper.pop();
//     }
// }
int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    Print(s);
    
    // stack<int> s_rev;
    // while(s.size()>0){
    //     s_rev.push(s.top());
    //     s.pop();
    // }
    // cout<<endl;
    // Print(s_rev);
    pushAtIdx(s,3,233);
    Print(s);
}