#include<iostream>
using namespace std;
int summ=0;
int ans(int i,int n){
    if(i>n) return summ;
    summ+=i;
    ans(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<ans(1,n);

}