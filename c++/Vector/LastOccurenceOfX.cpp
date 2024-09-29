// find last occurence of X in a vector 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements of vector : ";
    cin>>n;
//declaring vector and taking elements input by user
    vector<int> v;
    for(int i=0; i<=n-1; i++){
        int x;
        cout<<"enter "<<i<< " element";
        cin>>x;
        v.push_back(x);
    }
//displaying vector
    cout<<"your vector is : ";
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
//taking no. who's last occurence you want to find 
    int num;
    cout<<"no. who's last occurence you want to find : ";
    cin>>num;
    int last_occurence=0;
// looping in forward direction
    for(int i=0; i<=v.size()-1; i++){
        if(v[i]==num)  last_occurence = i ;//updating last occurence index 
    }
    cout<<"index of last occurence : "<<last_occurence<<endl;
// looping in reverse direction 
    for(int i=v.size()-1; i>=0 ; i--){
        if(v[i]==num) {
            last_occurence = i;
            break;
        } 
    }
    cout<<"index of last occurence : "<<last_occurence;
}