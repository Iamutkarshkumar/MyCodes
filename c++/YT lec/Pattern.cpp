#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter no. of columns";
    cin>>c;
    cout<<"enetr no. of rows";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<'*';
        
        }
        cout<<endl;
    }
    
    return 0;
}