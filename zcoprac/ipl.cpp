#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	vector<long long int> v(n);
	vector<long long int> a(n);

	for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    a[0]=v[0];
    if(n==1) {cout<< v[0];return 0;}
    a[1]=a[0]+v[1];
    if(n==2) {cout<< a[1];return 0;}
    a[2]=max((v[1]+v[2]),v[0]+v[2]);
    if(n==3) {cout<< a[2];return 0;}
    //only 3 case possible either its first or second or we don not take it
    for(int i=3;i<n;i++)
    {
        a[i]=max(a[i-1],(max((v[i]+v[i-1]+a[i-3]),(v[i]+a[i-2]))));
    }
    cout<<a[n-1];
    
	return 0;
}