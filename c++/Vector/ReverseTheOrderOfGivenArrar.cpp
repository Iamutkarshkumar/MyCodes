//reverse the order of array using extra array
#include<iostream>
#include<vector>
using namespace std;
//funtion to display vector
void display(vector<int>& a){
    for(int i=0; i<=a.size()-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector";
    cin>>n;
    cout<<"enter elements :";
    
    for(int i=0 ; i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    vector<int> v2(v.size());
    for(int i=0 ; i<n ; i++){
        v2[i]=v[v.size()-1-i];//v ke first aur v2 ke last index ka sum = v ka size-1
    }
    display(v2);
    
    
}