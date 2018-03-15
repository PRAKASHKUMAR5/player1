#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the limits and values:"<<endl;
	cin>>n;
	int arr[n],p[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n, greater<int>());
	for(int j=0;j<n;j++)
	{
			cout<<arr[j];
	}	
   return 0;
}