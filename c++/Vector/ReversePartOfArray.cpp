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
void ReversePart(int i , int j , vector<int>& v){
    while(i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector : ";
    cin>>n;
    cout<<"enter elements :";
    
    for(int i=0 ; i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    int a,b;
    cout<<"from which index you wanted to start seapping ? :";
    cin>>a;
    cout<<"to which index you wanted to start seapping ? :";
    cin>>b;
    ReversePart(a,b,v);
    display(v);
    
}