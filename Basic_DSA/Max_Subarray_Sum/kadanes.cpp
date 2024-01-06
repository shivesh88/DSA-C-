#include<iostream>
using namespace std;

int kadanes_subarray_sum(int arr[],int n){
	int cs = 0;
	int largest = arr[0];
	for(int i=0;i<n;i++){
		cs = cs + arr[i];
		if(cs>largest)
		cs=largest;
		if(cs < 0){
			cs = 0;
		}
	}
	return largest;
}
int main(){
	//int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int arr[] = {-500};
	int n = sizeof(arr)/sizeof(int);
	cout<< kadanes_subarray_sum(arr,n) <<endl;
	return 0;
}