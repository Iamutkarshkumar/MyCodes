#include<iostream>
#include<vector>
using namespace std;
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
        int k;
        cout<<"enter rotation";
        cin>>k;
        if(k>n) k=k%n;
        ReversePart(0 , n-k-1 , v);
        ReversePart(n-k , n-1 , v);
        ReversePart(0 , n-1 , v);
        display(v);
}