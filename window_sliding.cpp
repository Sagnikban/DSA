#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1000, 200, 300, 400};
	int k=2;
	int n=sizeof(arr)/sizeof(arr[0]);
	int max_sum=0,curr_sum=0;
	for (int i = 0; i < k; ++i)
	{
		max_sum+=arr[i];
	}
	curr_sum=max_sum;
	for (int i = k; i < n; ++i)
	{
		curr_sum+=arr[i]-arr[i-k];
		max_sum=max(curr_sum,max_sum);
	}
	cout<<max_sum;
}