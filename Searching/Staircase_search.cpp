#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    //array
    int n=4,m=4;
    vector<vector<int>>arr(n,vector<int>(m));
    arr= {{10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int key=33;
    //not found
    if(key < arr[0][0] or key>arr[n-1][m-1]){
        cout<<-1<<","<<-1<<endl;
    }
    int i=0;
    int j = m-1;

    while(i<=n-1 and j>=0){

        if(arr[i][j]==key){
            cout<<i<<","<<j<<endl;
            return 0;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<-1<<","<<-1<<endl;
}