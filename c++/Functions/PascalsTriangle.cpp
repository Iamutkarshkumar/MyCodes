// number of times 5
//     0 1 2 3 4 5 
// 0.  1
// 1.  1 1
// 2.  1 2 1
// 3.  1 3 3 1
// 4.  1 4 6 4 1
// 5.  1 5 10 10 5 1
#include<iostream>
using namespace std;
int fact(int x){  //factorial nikalne ke liye function
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){     //cobination nikalne ke liye function
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int x;
    cout<<"number of times ";
    cin>>x;
    for(int i=0; i<=x; i++){
        cout<<endl;
        for(int j=0; j<=i; j++){  // star triangle wali sturcture 
            cout<<combination(i,j)<<" ";
    }
}
}