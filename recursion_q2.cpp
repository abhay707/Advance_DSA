#include<iostream>
using namespace std;

int pali(int i, vector<int> &v, int n){
	if(i >= n/2) return true;
	if(v[i] != v[n - i - 1]) return false;
	return pali(i+1,v,n);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++) cin>>v[i];

	int palindrom = pali(0,v,n);
	cout<<palindrom;

}