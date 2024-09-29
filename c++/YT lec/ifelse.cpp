#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter actual cost ";
    cin>>a;
    int b;
    cout<<"enter selling cost cost ";
    cin>>b;
    if(a>b){
        cout<<"loss"<<endl;
        cout<<"loss of "<<a-b<<endl;
    }
    else if(a<b){
        cout<<"profit"<<endl;
        cout<<"profit of "<<b-a<<endl;
    }
    else if(a==b){
        cout<<"neither loss nor profit"<<endl;
    }
 
}
    
