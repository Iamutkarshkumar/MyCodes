// #include<iostream>
// #include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
        string s;
        getline(cin,s);
        cout<<s<<endl;
        reverse(s.begin()+0,s.begin()+(s.length()/2));
        cout<<s;
        return 0;
}