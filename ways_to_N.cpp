#include<iostream>
using namespace std;

int reachN(int n){
	if(n == 0) return 1;

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += reachN(i);
	}
	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	cout<<reachN(n);

	return 0;
}