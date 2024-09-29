#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    //sum in array
    int sum=0;
    for(int idx=0 ; idx<  size; idx++){
        sum=sum+array[idx];
        //cout<<array[idx]<<endl;
    }
    cout<<sum<<endl;
    return 0;
}