#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter no. of terms ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n ;i++){
        cout<<a<<endl;
        a=a*2;

    }
}
//GP --- 1 2 4 8 16 ........