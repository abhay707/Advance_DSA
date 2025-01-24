#include<iostream>
using namespace std;

int binary_search(int n, int a[], int val){
	int left = 0, right = n-1;
	int mid = (left + right)/2;
	while(left <= right){

	if(a[mid] == val){
		return mid;
	}else if(a[mid] < val){
		left = mid + 1;
	}else{
		right = mid - 1;
	}
}
return -1;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int val;
	cin>>val;

	cout<<binary_search(n, a, val);

	
	return 0;
}