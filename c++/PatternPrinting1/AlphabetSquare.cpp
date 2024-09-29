// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows ";
    cin>>n;
    cout<<"enter number of columns ";
    cin>>m;
    for(int i=1; i<=n;i++){
        cout<<endl;
        int a=65;
        for(int j=1; j<=m;j++){
        cout<<char(a)<<" ";
        a++;
    }}
}