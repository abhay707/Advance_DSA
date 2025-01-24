#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int l= 0,r = 3;

    vector<int> prefix_arr(n);
    prefix_arr[0] = v[0];
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        prefix_arr[i] = prefix_arr[i-1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = prefix_arr[r] - prefix_arr[l-1];
    }
    
    cout<<sum<<endl;
    
    return 0;
}