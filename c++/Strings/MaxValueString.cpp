#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    vector<string> v;
    string str;
    cout<<"enter no. of strings :";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>str;
        v.push_back(str);
        
    }
    int max = stoi(v[0]);
    string maxS=v[0];
    for(int i=0 ; i<v.size(); i++) {
        if (stoi(v[i])>max){
            max= stoi(v[i]);
            maxS= v[i];
        }
    }
    cout<<maxS;
}
  