#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    //array
    int n=4,m=4;
    vector<vector<int>>arr(n,vector<int>(m));
    arr={
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}
    };
    //Spiral Print
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;
    while(startCol<= endCol and startRow <=endRow){

        //Start Row
        for(int col = startCol; col<=endCol; col++){
            cout << arr[startRow][col]<<" ";
        }

        //End Col
        for(int row=startRow + 1;row<=endRow;row++){
            cout << arr[row][endCol]<<" ";
        }

        //End Row
        for(int col=endCol - 1; col>=startCol;col--){
            //Avoid Duplicate Printing of elements
            if(startRow==endRow){
                break;
            }
            cout<< arr[endRow][col]<<" ";
        }   

        //Start Col
        for(int row = endRow-1; row >=startRow + 1;row--){
            //Avoid Duplicate Printing of elements
            if(startCol==endCol){
                break;
            }
            cout<< arr[row][startCol] <<" ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
    cout<<endl;


}