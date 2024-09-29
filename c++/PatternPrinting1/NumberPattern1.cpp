//printing following pattern
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows ";
    cin>>n;
    cout<<"enter number of columns ";
    cin>>m;
    for(int j=1; j<=n;j++){
        cout<<endl;
        for(int i=1; i<=m;i++){
        cout<<i<<" ";
    }}
}