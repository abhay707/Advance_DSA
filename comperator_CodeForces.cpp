//You're given a list of n strings a1, a2, ..., an. You'd like to concatenate them together in some order such that the resulting string would be lexicographically smallest.

//Given the list of strings, output the lexicographically smallest concatenation.

#include<iostream>
using namespace std;

bool comparelexi(string a, string b){
	return a + b < b + a; 
}

int main(){

    int n;
	cin>>n;
	string a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	sort(a,a+n,comparelexi);

	for (int i = 0; i < n; i++)
	{
		cout<<a[i];
	}
    return 0;
}