#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"a:";
    cin>>a;
    if(a%2==0){
        if(a%3==0){
            cout<<"number is even and divisible by 3"<<endl;
        }else{
            cout<<"number is even but not divisible by 3"<<endl;
        }
    }else{
        cout<<"number is not even "<<endl;
    }
    return 0;
}
   
        