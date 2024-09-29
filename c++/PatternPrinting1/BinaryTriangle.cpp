//  1 2 3 4 5
//1 1
//2 0 1
//3 1 0 1
//4 0 1 0 1
//5 1 0 1 0 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    //METHOD 1
    int a;
    for(int i=1; i<=n;i++){
        cout<<endl;
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1; j<=i;j++){
        cout<<a<<" ";
        //flipping
        if(a==1) a=0;
        else a=1;
    }}
    //METHOD 2 "place of 1 ----> when i==j and sum of i and j is even"
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=i;j++){
            if(i==j || (i+j)%2==0 )cout<<1<<" ";
            else cout<<0<<" ";
    }}
    
}