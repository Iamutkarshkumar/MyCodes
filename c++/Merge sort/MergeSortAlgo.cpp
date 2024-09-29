//MERGE SORT
//TIME COMPLEXITY O(n Log n)
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0; //a
    int j=0; //b
    int k=0; //res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){//a is at end
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){//b is at end
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
void MergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return; //BASE CASE
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    //COPY PASTING 
    for(int i=0; i<n1; i++){
        a[i]=v[i];
    }
    for(int i=0; i<n2; i++){
        b[i]=v[i+n1];
    }
    //MAGIC AKA RECURSION
    MergeSort(a);
    MergeSort(b);
    //MERGE
    merge(a,b,v);
}
int main(){
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    MergeSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}