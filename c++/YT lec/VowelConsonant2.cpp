#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"enter an alphabet: ";
    cin>>x;
    if(x =='a'|x=='e'|x=='i'|x =='o'|x=='u'|x =='A'|x=='E'|x=='I'|x =='O'|x=='U'){
        cout<<"entered alphabet is a vowel"<<endl;
    }else{
        cout<<"entered alphabet is a consonant"<<endl;
    }
    
return 0;    
}