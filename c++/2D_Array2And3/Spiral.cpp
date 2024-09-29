//    1  2  3
//   -------->
//           |
//    4  5  6
//    --->   |
//   |       |
//    7  8  9
//   <--------
//output 1 2 3 6 9 8 7 4 5
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows :";
    cin>>m;
    cout<<"enter no. of columns :";
    cin>>n;
    cout<<endl;
    int arr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<"enter "<<i<<","<<j<<" element :";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j =0 ; j<n ; j++){
           
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc ; j<=maxc ; j++){//right
        cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc ) break;
        for(int i=minr ; i<=maxr ; i++){//down
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc ) break;
        for(int j=maxc ; j>=minc ; j--){//left
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc ) break;
        for(int i=maxr ; i>=minr ; i--){//up
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc ) break;
        }
    
}
