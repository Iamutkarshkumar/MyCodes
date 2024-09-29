#include<iostream>
using namespace std;
int odd(int x , int y){
    for(int i=x ; i<=y; i++ ){
        if(i%2!=0) {
            cout<<i<<endl;
        }
    }
}
int main(){
    int a;
    cout<<"enter 1st number ";
    cin>>a;
    int  b;
    cout<<"enter 2nd number ";
    cin>>b;
    cout<<"odd number between 1st and 2nd number is "<<odd(a,b);
}