#include<iostream>
using namespace std;
int main()
{
    //while loop
    int n;
    cout<<"enter : ";
    cin>>n;
    int sum=0;
    int i=1;
    while (i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;


    //for loop
    int sum1 =0;
    for(int i=1 ; i<=n ; i=i+1){
        sum1=sum1+i;
    }
    cout<<sum1<<endl;

return 0;

}