#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count;
	cout<<"Enter the limits and values:"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(count==1)
		cout<<a[i]<<" ";
	}
   return 0;
}
