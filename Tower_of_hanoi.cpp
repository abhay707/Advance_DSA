#include<iostream>
using namespace std;

void TOH(int n, string source, string helper, string destination){
	if(n == 0) return;

	TOH(n - 1, source, destination, helper);

	cout<< source << " ----> "<< destination<<"\n";

	TOH(n - 1, helper, source, destination);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	TOH(n, "A", "B", "C");
	return 0;
}