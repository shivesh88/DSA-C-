#include<bits/stdc++.h>
using namespace std;
/*
problem:-https://cses.fi/problemset/task/1071/

solution:-

observation: 
1.row y and col 1 is square of y if y is even
2.row 1 and col x is square of x if x is odd
3.for an odd y value of every x reduces by one
4.for an even y value of every x increases by one
*/
int main(){
    long long int x,y,t;
    cin>>t;
    while(t--){
        cin>>y>>x;
        if(y>=x){
            if(y&1){
                cout<<((y-1)*(y-1))+x<<endl;
            }
            else{
                cout<<((y)*(y))-x+1<<endl;
            }
        }
        else{
            if(x&1){
                cout<<((x)*(x))-y+1<<endl;
            }
            else{
                cout<<((x-1)*(x-1))+y<<endl;
            }
        }
    }
}