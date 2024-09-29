#include<iostream>
using namespace std;
float area(float r){
    return 3.14*r*r;
}
int main(){
    int a;
    cout<<"enter a radius ";
    cin>>a;
    cout<<"area of circle is "<<area(a);
}