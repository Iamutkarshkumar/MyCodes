#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(string s){
    stack<char> x;
    for(int i=0;i<s.length();i++){
        if(x.size()==0) x.push(s[i]);
        else if(x.top()==s[i]) continue;
        else x.push(s[i]);
    }
    string ans;
    while(x.size()!=0){
        ans+=x.top();
        x.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
int main(){
    string s;
    getline(cin,s);
    removeDuplicate(s);
    
}