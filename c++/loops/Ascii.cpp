#include<iostream>
using namespace std;
int main(){
    int i=65;
    cout<<"ASCII VALUE FOR UPPERCASE ALPHABET"<<endl;
    while(i<=90){
        cout<<i<<" "<<char(i)<<endl;
        i+=1;
    }
    int j=97;
    cout<<"ASCII VALUE FOR LOWERCASE ALPHABET"<<endl;
    while(j<=122){
        cout<<j<<" "<<char(j)<<endl;
        j+=1;
    }
    int a=48;
    cout<<"ASCII VALUE 0 TO 9"<<endl;
    while(a<=57){
        cout<<a<<" "<<char(a)<<endl;
        a+=1;
    }
}
