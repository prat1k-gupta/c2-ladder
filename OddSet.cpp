#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;  
    while(t--){
        int n; 
        cin>>n;
        int inp;  
        int oddCount = 0; 
        int evenCount = 0; 
        for(int i = 0; i<2*n; i++){
            cin>>inp; 
            if(inp%2==0){
                evenCount++; 
            }else{
                oddCount++; 
            }
        }
        if(evenCount == oddCount){
            cout<<"YES"<<endl; 
        }else cout<<"NO"<<endl; 
    }
    return 0; 

}