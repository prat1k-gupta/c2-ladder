#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n; 
        cin>>n; 
        int inp; 
        int sum=0; 
        for(int i=0; i<n; i++){
            cin>>inp;
            sum+=inp;  
        }
        
        if(sum>=n){
            cout<<sum-n<<endl;
        }else{
            cout<<1<<endl;  
        }
    }
    return 0; 
}