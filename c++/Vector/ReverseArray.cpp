//reverse the order of array without using extra array
//using extra variable
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
    for(int i=0 ,j=v.size()-1 ; i<=j ; i++,j--){
        int temp =v[i];//swapping
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);
    
}