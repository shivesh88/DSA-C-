#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int arraydescription(int n,int m,vector<int>&arr,int i){
    if(i==n){
        return 1;
    }
    int count=0;
    if(arr[i]!=0){
        return arraydescription(n,m,arr,i+1);
    }
    for(int k=1;k<=m;k++){
        arr[i]=k;
        if(i==0&&abs(arr[i]-arr[i+1])<=1){
            count=count+arraydescription(n,m,arr,i+1)%mod;
        }
        else if(i==n-1&&abs(arr[i]-arr[i-1])<=1){
            count=count+arraydescription(n,m,arr,i+1)%mod;
        }
        else if(abs(arr[i]-arr[i-1])<=1&&abs(arr[i]-arr[i+1])<=1){
            count=count+arraydescription(n,m,arr,i+1)%mod;
        }
    }
    
    return count;
}
int main(){
    // int n,m;
    // cin>>n>>m;
    // ;
    // for(auto&x:arr){
    //     cin>>x;
    // }
    int n=10,m=3;
    vector<int>arr={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cout<<arraydescription(n,m,arr,0);
}