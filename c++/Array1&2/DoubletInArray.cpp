//array part 2 mein karaya hai ye ques '''''time= 01:32:00'''''
//leet code ka bhi ques hai ye two sum karke
//Find the doublet[their index] in the array whose 
//sum is equal to the given value of x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter target";
    cin>>x;
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
    for(int i=0 ; i<=v.size()-2 ; i++){
        for(int j=i+1; j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"["<<i<<","<<j<<"]" ;
                
            }
            
        }
    }  
}