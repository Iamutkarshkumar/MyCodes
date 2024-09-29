#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows of 1st matrix :";
    cin>>m;
    cout<<"enter no. of columns of 1st matrix :";
    cin>>n;
    int p,q;
    cout<<"enter no. of rows of 2nd matrix :";
    cin>>p;
    cout<<"enter no. of columns of 2nd matrix :";
    cin>>q;
    if(n==p){
    int a[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<"enter "<<i<<","<<j<<" element of 1st matrix:";
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int b[p][q];
    for(int i=0 ; i<p ; i++){
        for(int j =0 ; j<q ; j++){
            cout<<"enter "<<i<<","<<j<<" element of 2nd matrix:";
            cin>>b[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
           
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0 ; i<p ; i++){
        for(int j =0 ; j<q ; j++){
           
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int res[m][q];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<q ; j++){
            res[i][j]=0;
            //res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]+......
            for(int k=0 ; k<n ; k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"ANSWER"<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
           
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    }
    else{
        cout<<"matrices cant be multiplied"<<endl;
    }
    
    
}