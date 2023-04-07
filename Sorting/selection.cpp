#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&a,int n){
    for(int i=0;i<n-1;i++){
		pair<int,int>p;
		p.first=a[i];		
        for(int j=i;j<n;j++){
			if(p.first>=a[j]){
				p.first=a[j];
				p.second=j;
			}
		}
		swap(a[i],a[p.second]);
        
    }
}
int main(){
	vector<int>arr{-2,3,4,-1,5,-12,6,1,3};
	int n =arr.size();
	selection_sort(arr,n);
	cout<<"Arr: ";
	for(int x:arr){
		cout<<x<<", ";
	}cout<<endl;	
	
	return 0;
}