#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<=a.size()-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> v;
        int n;
        cout<<"enter size of vector : ";
        cin>>n;
        cout<<"enter elements :";
        
        for(int i=0 ; i<n; i++){
            int q;
            cin>>q;
            v.push_back(q);
        }
    
        
        int noz=0,noo=0;
        for(int l=0 ; l<=n-1; l++){
            if(v[l]==0) noz+=1;
            else noo+=1;
        }
        for(int j=0 ; j<v.size() ; j++){
            if(j<noz) v[j]=0;
            else v[j]=1;
            
        }
        
        display(v);
        
}
