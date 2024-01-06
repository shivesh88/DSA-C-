#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>>&sudoku);
bool safe(vector<vector<int>>&sudoku,int num,int row,int col){
    for(int i=0;i<9;i++){
        if(sudoku[i][col]==num||sudoku[row][i]==num){
            return false;
        }
    }
    int startrow=row-row%3;
    int startcol=col-col%3;
    for(int i=startrow;i<startrow+3;i++){
        for(int j=startcol;j<startcol+3;j++){
            if(sudoku[i][j]==num){
                return false;
            }
        }
    }
    return true;
}
bool solve(vector<vector<int>>&sudoku){
    int row,col;
    bool iszero=false;
    for(row=0;row<9;row++){
        if(!iszero){
            for(col=0;col<9;col++){
                if(sudoku[row][col]==0){
                    iszero=true;
                    break;
                }
            }
        }
        else break;
    }
    row--;
    if(!iszero){
        return true;
    }
    for(int num=1;num<10;num++){
        if(safe(sudoku,num,row,col)){
            sudoku[row][col]=num;
        
        if(solve(sudoku)){
            return true;
        }
        sudoku[row][col]=0;
        }
    }
    return false;

}
int main(){
    vector<vector<int>> sudoku(9,vector<int>(9,0));
    // vector<vector<int>> sudoku = {
    //     {5, 3, 0, 0, 7, 0, 0, 0, 0},
    //     {6, 0, 0, 1, 9, 5, 0, 0, 0},
    //     {0, 9, 8, 0, 0, 0, 0, 6, 0},
    //     {8, 0, 0, 0, 6, 0, 0, 0, 3},
    //     {4, 0, 0, 8, 0, 3, 0, 0, 1},
    //     {7, 0, 0, 0, 2, 0, 0, 0, 6},
    //     {0, 6, 0, 0, 0, 0, 2, 8, 0},
    //     {0, 0, 0, 4, 1, 9, 0, 0, 5},
    //     {0, 0, 0, 0, 8, 0, 0, 7, 9}
    // };
    int row,col;
    solve(sudoku);
    for(row=0;row<9;row++){
        for(col=0;col<9;col++)
            cout<<sudoku[row][col]<<" ";
        cout<<endl;
    }
}