#include<bits/stdc++.h>
using namespace std;
/*
problem: https://cses.fi/problemset/task/1092/
Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
idea
1 2 3 4
sum every pair of last term is same=>1+4=3+2 
*/

int main(){
    long int n;
    cin>>n;
    long int t=n*(n+1)/2;
    if(t&1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    long int tt=t/2;
    if(n&1){
        long c=(n+1)/2,a=1,b=n-1;
        cout<<c<<endl;
        long d=n-c-1;
        while(c){
            cout<<a<<" "<<b<<" ";
            a++;b--;c-=2;
        }
        cout<<endl<<d+1<<endl;
        while(d){
            cout<<a<<" "<<b<<" ";
            d-=2;a++;b--;
        }
        cout<<n<<endl;
    }
    else{
        long c=(n)/2,a=1,b=n;
        cout<<c<<endl;
        long d=n-c;
        while(c){
            cout<<a<<" "<<b<<" ";
            a++;b--;c-=2;
        }
        cout<<endl<<d<<endl;
        while(d){
            cout<<a<<" "<<b<<" ";
            d-=2;a++;b--;
        }
    }
    

}