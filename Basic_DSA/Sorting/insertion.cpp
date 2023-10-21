#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&a,int n){
    int sorted=0;
    for(int i=sorted+1;i<n;i++){
        int temp=a[i];
        int prev=i-1;
        while(prev>=0&&a[prev]>temp){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=temp;
    }
}
int main(){
	vector<int>arr{-2,3,4,-1,5,-12,6,1,3};
	int n =arr.size();
	insertion_sort(arr,n);
	cout<<"Arr: ";
	for(int x:arr){
		cout<<x<<", ";
	}cout<<endl;	
	
	return 0;
}