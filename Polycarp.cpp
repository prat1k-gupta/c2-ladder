#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n; 
        cin>>n; 
        int rest = n%3; 
        int c1 = n/3+rest; 
        int c2 = n/3; 
        // 2
        // 35
        // 11 12
        // 34
        // 12 11
        if(rest%2==0){
            c1 = n/3; 
            c2 = n/3+(rest/2); 
        }
        // 32 10 10 rest = 2
        cout<<c1<<" "<<c2<<endl; 
    }
    return 0; 
}