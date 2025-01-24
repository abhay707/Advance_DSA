// swap the element of an array using recursion


#include<iostream>
using namespace std;

void swap_arr(int i,vector<int> &v, int size){
    if(i >= size/2) return;
    swap(v[i], v[size - i - 1]);
    swap_arr(i+1,v,size);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int> v(n);
    // int v[n];
    for (int i = 0; i < n; i++) cin>>v[i];  

    swap_arr(0, v,n);
    
    for (int i = 0; i < n; i++) cout<<v[i]<<" ";

    return 0;
    
}