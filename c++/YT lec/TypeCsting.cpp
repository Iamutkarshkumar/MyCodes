#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(int(str[i])<=90){
                str[i]+='a'-'A';
                cout<<str[i];
        }
        else cout<<str[i];
        
    }
    for(int i=0;i<str.size();i++){
        if(int(str[i])>90){
                str[i]+='A'-'a';
                cout<<str[i];
        }
        else cout<<str[i];
    }
}
//not a proper code but take an idea


