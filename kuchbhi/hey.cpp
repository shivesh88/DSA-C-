#include<bits/stdc++.h>
using namespace std;
int distance(vector<vector<int>> &a, vector<int> &b, vector<int> &c, int n,int m)
{
    if(b==c){
        return 0;
    }
    if(c[0]<0||c[0]>=n||c[1]>=m||c[1]<0){
        return -1;
    }
    if(a[b[0]][b[1]]==1||a[c[0]][c[1]]==1){
        return -1;
    }
    int shortest=-1;
    



    c={c[0]-1,c[1]};
    int d = distance(a,b,c,n,m);
    if(d!=-1||d<shortest)
    shortest=d;


    c={c[0]+1,c[1]};
    d=distance(a,b,c,n,m);
    if(d!=-1&&(shortest==-1||d<shortest))
    shortest=d;


    c={c[0],c[1]-1};
    d=distance(a,b,c,n,m);
    if(d!=-1&&(shortest==-1||d<shortest))
    shortest=d;


    c={c[0],c[1]+1};
    d=distance(a,b,c,n,m);
    if(d!=-1&&(shortest==-1||d<shortest))
    shortest=d;
    return shortest;
}
int main() {
    vector<vector<int> > A={{1,1,0,1},{0,0,0,1},{1,0,0,1},{0,0,1,0}};
    vector<int> B={1,1};
    vector<int> C={2,1};
    if(A[C[0]][C[1]]==0&&A[B[0]][B[1]]==0){
        cout<< distance(A,B,C,(int)A.size(),(int)A[0].size());
    }
    else cout<< -1;
}