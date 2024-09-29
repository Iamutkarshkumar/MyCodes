#include <bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4,s5;
    int count =0;
    cin>>s1>>s2>>s3>>s4>>s5;
    vector<int> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    v.push_back(s4);
    v.push_back(s5);
   
    for(int i=0; i<5;i++){
        for(int j=i+1;j<5;j++){
            if(v[i]>v[j] && i<j) count++;
        }
    }
    cout<<count;
}

