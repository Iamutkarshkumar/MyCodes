//given an array of marks of students,
//if the marks of any student is less 
//than 35 print its roll number.[roll no. refers to index of the array]
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students :";
    cin>>n;
    int marks[n];
    for(int i=0 ; i<=(n-1) ; i++){
        cout<<"enter marks of " <<i<<" roll no. :" ;
        cin>>marks[i];
    }
    cout<<"array of marks of students:"<<endl;
    for(int i=0 ; i<=(n-1) ; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"roll no. of students having marks less than 35 are: "<<endl;
    for(int i=0 ; i<=(n-1) ; i++){
        if(marks[i]< 35){
            cout<<i<<endl;
        }
    }

}
