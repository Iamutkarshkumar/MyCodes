#include<iostream>
using namespace std; 
int main(){
    int a;
    cout<<"enter first term ";
    cin>>a;
    int d;
    cout<<"enter common difference ";
    cin>>d;
    int n;
    cout<<"enter no. of terms ";
    cin>>n;
    for(int i=a; i<=(a+(n-1)*d) ;i=i+d){
        cout<<i<<endl;

    }
}