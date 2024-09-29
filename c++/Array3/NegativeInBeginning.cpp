//move all nrgative no. to beginning and
//positive to end with constant extra space
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<=a.size()-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int m = v.size();
    int i =0;
    int j= m-1;
    
    if(v[i]<0)i++;
    if(v[j]>0)j--;
    if(v[i]>0 && v[j]<0){
        int temp = v[i];
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
        cout<<"enter "<<n<<" elements :";
        
        for(int i=0 ; i<n; i++){
            int q;
            cin>>q;
            v.push_back(q);
        }
        sort01(v);
        display(v);
        
}
