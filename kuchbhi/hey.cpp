#include<bits/stdc++.h>
using namespace std;

int distance(vector<vector<int>> &a, const vector<int> &b,
             vector<int> &c, int n, int m,vector<vector<bool>>&visited) {
    
}

int main() {
    vector<vector<int>> A = {{1, 1, 0, 1}, {0, 0, 0, 1}, {1, 0, 0, 1}, {0, 0, 1, 0}};
    vector<int> B = {1, 1};
    vector<int> C = {2, 1};
    int n = A.size();
    int m = A[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    cout << distance(A, B, C, n, m, visited);
    return 0;
}
