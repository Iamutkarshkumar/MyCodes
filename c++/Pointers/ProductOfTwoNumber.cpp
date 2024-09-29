#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int *ptrX, *ptrY;
    ptrX = &a;
    ptrY = &b;
    cout<<(*ptrX)*(*ptrY);
}