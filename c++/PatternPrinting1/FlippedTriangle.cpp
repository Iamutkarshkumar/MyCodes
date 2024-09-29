//  1 2 3 4 5
//1         *
//2       * *
//3     * * *
//4   * * * *
//5 * * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    //METHOD 1
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n-i;j++){
        cout<<" "<<" ";}//pehele space ka triangle bana liya 
         for(int j=1; j<=i;j++){
        cout<<"*"<<" ";}// space ke triangle mein * ka triangle add kar diya jisse space and * adjust ho gaye
    }  
    // METHOD 2
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n;j++){
            
                if((i+j)>=(n+1)) cout<<"*"<<" ";
                else cout<<" "<<" ";
            }

        }
        
    }
    
 