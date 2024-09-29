// C++ Assignments | Recursion - 1 | Week 11
// Ques 2: Calculate the number of ways in which a person can climb n stairs if he can take exactly 1 , 2 or 3
// steps at each level.
#include <bits/stdc++.h>
using namespace std;
int stairs(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    return stairs(n-1) + stairs(n-2) + stairs(n-3); 
}
int main(){
   int n;
   cout<<"enter total steps of stair : ";
   cin>>n;
   cout<<endl;
   cout<<stairs(n);

}
