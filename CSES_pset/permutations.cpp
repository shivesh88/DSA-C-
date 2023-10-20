#include<bits/stdc++.h>
using namespace std;

/*
problem:-https://cses.fi/problemset/task/1070/
print permutation of first n natural numbers such that no adjacent numbers have difference of 1
idea:-
every consecutive odd or even number diffrence is 2
*/
int main(){
    long long int n;
    cin>>n;
    if(n==1){cout<<1;
    return 0;}
    if(n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    return 0;
}
