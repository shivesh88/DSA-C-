#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array
// Brute Force Approach O(N^3)
int largestSubarraySum(int arr[],int n){

	int largest_sum = 0;

	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){

			int subarraySum = 0;

			for(int k=i; k<=j; k++){
				subarraySum += arr[k];
			}
			largest_sum = max(largest_sum,subarraySum);

		}
	}
	return largest_sum;
}
int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	cout<< largestSubarraySum(arr,n) <<endl;
	return 0;
}