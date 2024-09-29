#include<iostream>
using namespace std;
int main(){
    binary search 
    int v[7]={6,5,4,3,2,1,0};
    for(int i=0;i<7-1;i++){
        for(int j=0;j<7-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }

    //binary search optimised
    int v[7]={6,5,4,3,2,1,0};
    for(int i=0;i<7-1;i++){
        bool flag=true;
        for(int j=0;j<7-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true) {//swapping didn't happen
            break;
            }
    }
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }


}