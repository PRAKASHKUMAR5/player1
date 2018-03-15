#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cout<<"Enter the limits :"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int j=n-1;j>=n/2;j--)
	{
		cout<<arr[j];
		if(x<n/2)
		{
			cout<<arr[x];
		}
		x++;
	}
	
}