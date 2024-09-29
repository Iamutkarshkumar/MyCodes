#include<iostream>
#include<string>
using namespace std;
void Remove(string ans , string s, int idx){
    if(idx==s.length()) {
        cout<<ans;
        return;
    }
    char ch = s[idx];
    if(ch=='a') Remove(ans , s, idx+1);
    else Remove(ans+ch,s,idx+1);

}
int main(){
    string s;
    getline(cin,s);
    Remove("",s,0);

}