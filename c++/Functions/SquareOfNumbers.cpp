#include<iostream>
using namespace std;
int square(int n){
    for(int i=1 ; i<=n ; i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    square(a);
}