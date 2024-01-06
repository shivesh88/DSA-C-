#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,mxl=0,mxd=1,pos=0;
    cin>>n;
    stack<int>st;
    st.push(1);
    int crd=1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x==2){
            crd--;
        }else crd++;
        if(mxd<crd){
            mxd=crd;
            pos=i+1;
        }
    }
    cout<<pos<<mxd;
    
}