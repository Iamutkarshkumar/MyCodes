#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={6,3,2,4,1,7,1,5};
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum-28;
}