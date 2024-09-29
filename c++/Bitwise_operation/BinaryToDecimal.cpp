#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter binary number :";
    cin>>s;
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=s[i]*pow(2,i);
    }
    cout<<ans;

}