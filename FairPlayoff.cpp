#include<bits/stdc++.h>
using namespace std; 

void sortInputs(vector<int> res,int &firstMax,int &secondMax){
    sort(res.begin(),res.end()); 
    firstMax = res[3]; 
    secondMax = res[2];
}
int main(){
    int t; 
    cin>>t; 
    while(t--){
        vector<int> res(4);
        cin>>res[0]>>res[1]>>res[2]>>res[3]; 
        int firstMax ,secondMax; 
        int first = max(res[0],res[1]);  
        int second = max(res[2],res[3]);
        sortInputs(res,firstMax,secondMax);
        if(first == firstMax && second == secondMax || first == secondMax && second == firstMax){
            cout<<"YES"<<endl; 
        }  
        else cout<<"NO"<<endl; 
    }
    return 0; 
}