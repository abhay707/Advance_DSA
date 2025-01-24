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
			right = mid;
		}
	}
	return left;
}

int upper_bound(int n, int arr[], int val){
	int left, right, mid;
	left = 0;
	right = n;
	while(left<right){
		mid = (left + right)/2;
		if(arr[mid]>val){
			right = mid;
		}else{
			left = mid + 1;
		}
	}
	return left;
}

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
	cout<<upper_bound(n,arr,val)<<endl;

	
}