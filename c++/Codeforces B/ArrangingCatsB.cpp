// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int countS=0;
//     int countF=0;
//     for(int i=0 ;i<t ; i++){ 
//        int n;
       
//        int superCount=0;
//        cin>>n;
//        string s,f;
//        cin>>s;
//        cin>>f;
//        for(int j=0; j<n; j++){
//         if(s[j]=='1') countF+=1;
//         if(f[j]=='1') countF+=1;
//        }
//        for(int j=0; j<n; j++){
//         if(countF>=countS){
//             if(s[j]=='1' && f[j]=='1'){
//                 countF-=1;
//             }
//             else continue;
//             cout<<countF;
//             break;
//         }
//         if(countS>countF){
//             if(s[j]=='1' && f[j]=='1'){
//                 countS--;;
//             }
//             else continue;
//             cout<<countS;
//             break;
//         }
        
//        }
    
       

//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ;i<t ; i++){ 
       int n;
       int countS=0;
       int countF=0;
       cin>>n;
       string s,f;
       cin>>s;
       cin>>f;
       int count=0;
       for(int j=0; j<n; j++){
        if(s[j]=='1') countS+=1;
        if(f[j]=='1') countF+=1;
       }
       for(int j=0; j<n; j++){
            
            if(s[j]=='0'&&f[j]=='1'){
                count+=1;
            }
       }
       if(countF==0) cout<<countS<<endl;
       else if(countS>countF) cout<<count+countS-countF<<endl;
       else cout<<count<<endl;
    }
}
