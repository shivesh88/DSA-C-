// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int mxc=0;
//     for(int i=0;i<n;i++){
        
        
//         for(int j=0;j<=i;j++){
//             vector<int>v=a;
//             int crc=1;
//             for(int k=j;k<=i;k++){
//                 v[k]=1-v[k];
//             }
//             for(int k=1;k<n;k++){
//                 if(v[k]!=v[k-1]){
//                     crc++;
//                     mxc=max(mxc,crc);
//                 }
                
//                 else crc=1;
//             }
            
//         }
//     }
//     cout<<mxc;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mxc = 1;  // Initialize with 1 as the minimum length is 1

    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            dp[i] = dp[i - 1] + 1;
            mxc = max(mxc, dp[i]);
        }
    }

    cout << mxc;

    return 0;
}