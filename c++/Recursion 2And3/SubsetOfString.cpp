#include<iostream>
#include<string>
using namespace std;
void Substr(string ans , string original,int idx ){
    if(original.length()==idx){
        cout<<ans<<endl;
        return;
    }
    char ch =original[idx];
    Substr(ans,original, idx+1);
    Substr(ans+ch,original, idx+1);
    
}

int main(){
    string original;
    getline(cin,original);
    Substr("",original,0);

}