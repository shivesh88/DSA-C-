#include<bits/stdc++.h>
using namespace std;
/*
problem:- https://cses.fi/problemset/task/1072
count for the number of ways two knights can be placed on a k*k chessboard
solution
find all combinations and subtract with all that are not safe
*/
int main(){
    int n;cin>>n;
    for(long long int i=1;i<=n;i++){
        long long int total=((i*i)*((i*i)-1))/2,attacking=((i-1)*(i-2)*4);
        cout<<(total-attacking)<<endl;
    }
}