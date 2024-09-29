#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0 ; i<6;i++){
        cout<<"enter elem";
        //int elem;
        cin>>v[i];
    }
    int sum1;
    for(int i=0 ;i<6;i=i+2){
        sum1=sum1+v[i];
    }
    int sum2;
    for(int i=1 ;i<6;i=i+2){
        sum2=sum2+v[i];
    }
    cout<<sum1-sum2<<endl;
    return 0;

}