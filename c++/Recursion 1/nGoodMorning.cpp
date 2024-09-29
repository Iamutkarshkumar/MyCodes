#include<iostream>
using namespace std;
void good_morning(int n){
    if(n==0) return;
    cout<<"GOOD MORNING"<<endl;
    good_morning(n-1);
}
int main(){
    int n;
    cin>>n;
    good_morning(n);
}