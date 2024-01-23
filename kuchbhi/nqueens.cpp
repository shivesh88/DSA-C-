#include<bits/stdc++.h>
using namespace std;
bool nqueens(vector<vector<int>>&board,int n,int row=1);
bool safe(int row,int col,vector<vector<int>>board,int n){
    for(int i=1;i<=n;i++){
        if(board[row][i]==1||board[i][col]==1)
        return false;
    }
    for (int i = row, j = col; i > 0 && j > 0; i--, j--)
        if (board[i][j])
            return false;
 
    for (int i = row, j = col; i > 0 && j <= n; i--, j++)
        if (board[i][j])
            return false;
 
    return true;
}
bool nqueens(vector<vector<int>>&board,int n,int row){
    if(row==n){
        return true;
    }
    for(int col=1;col<=n;col++){
        if(safe(row,col,board,n)){
            if(nqueens(board,n,row+1)){
                board[row][col]=1;
                return true;
                
            }
            board[row][col]=0;
        }
    }
    return false;
}
int main(){
    int n;
    //cin>>n;
    n=8;
    vector<vector<int>>board(n+1,vector<int>(n+1,0));
    nqueens(board,n,1);
    for(auto a:board){
        for(auto m:a){
            cout<<m<<" ";
        }
        cout<<endl;
    }
}