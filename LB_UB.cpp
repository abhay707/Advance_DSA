#include<iostream>
using namespace std;

// int binary_search(int n, int arr[], int val){
// 	int left, right, mid;
// 	left = 0;
// 	right = n - 1;
// 	mid = (left + right)/2;

// 	while(left <= right){
// 		if(arr[mid] == val){
// 			return mid;
// 		}
// 	}
// }

int lower_bound(int n, int arr[], int val){
	int left, right, mid;
	left = 0;
	right = n;
	while(left<right){
		mid = (left + right)/2;
		if(arr[mid]<val){
			left = mid + 1;
		}else{
			left + mid;
			right = mid;
		}
	}
	return mid;
}

// int upper_bound(int n, int arr[], int val){
// 	int ub = 0;

// 	for (int i = 0; i < n; ++i)
// 	{
// 		if(arr[i] == val){
// 			ub = i;
// 		}
// 	}

// 	return ub;
// }

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int val;
	cin>>val;

	cout<<lower_bound(n,arr,val)<<endl;
	// cout<<upper_bound(n,arr,val)<<endl;

	
}