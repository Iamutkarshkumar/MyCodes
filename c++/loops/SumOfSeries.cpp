// sum of the series 1-2+3-4+5-6.... upto n 
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter last digit ";
    cin>>n;
    
    //METHOD 1
    int sum=0;
    for(int i=1; i<=n;i++){
        if(i%2==0) sum-=i;
        else sum+=i;
    }
    cout<<sum<<endl;


    //METHOD 2
    if(n%2==0) cout<<-n/2;
    else cout<<n+(-(n-1)/2);
    return 0;
   
}
