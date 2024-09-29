#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if (age<12){
        cout<<"CHILD"<<endl;
    }else if(age>=12 && age<= 18){
        cout<<"TEENAGER"<<endl;
    }else{
        cout<<"ADULT"<<endl;
    }
return 0;    
}