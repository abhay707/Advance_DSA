#include<iostream>
#include<vector>
#include<map>

using namespace std;

void unique(int arr[], int n){

}

//compare pair but if the second element is bigger it should come first
// bool compare(pair<int,int> a, pair<int, int> b){
// 	if(a.first != b.first){
// 		return a.first<b.first;
// 	}else{
// 		if(a.second < b.second) return false;
// 		else return true; 
// 	}
// }

//Compare on the bases of the squareroot 
bool compareSqr (int a, int b){
	if(a*a == b*b){
		return a<b;
	}else{
		return a*a<b*b;
	}
}

//return the decending order of the array
bool comparedecending(int a, int b){
	if(a<b){
		return false;
	}else{
		return true;
	}
}

map<int, int> frequency_map;

//compare the frequency of the nunber and return the large one 
bool compareFreq(int a, int b){
	return frequency_map[a] < frequency_map[b];
}

int main(){

	// unique in array
	// int n;
	// cin>>n;
	// int arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin>>arr[i];
	// }
	// sort(arr,arr+n);
	// n = unique(arr, arr+n) - arr;
	// cout<< n << '\n';

	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// return 0;


	//logic of unique hw
	//use two loops i and j



	//comperators
	// int n;
	// cin>>n;
	// int ar[n];
	// for(int i = 0;i<n;i++){
	// 	cin>>ar[i];
	// 	frequency_map[ar[i]]++;
	// }

	// sort(ar,ar+n, compareFreq);

	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<ar[i]<<" ";
	// }

	int n;
	cin>>n;
	string a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	sort(a,a+n,compareFreq);

	for (int i = 0; i < n; i++)
	{
		cout<<a[i];
	}
}