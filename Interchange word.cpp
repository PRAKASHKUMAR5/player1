#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int sp=0,l=s.length();
	char a[l];
	strcpy(a,s.c_str());
	for(int i=0;i<l;i++)
	{
		if(a[i]==' ')
		{
			sp=i;
		}
	}
	for(int j=sp+1;j<l;j++)
	{
		cout<<a[j];
	}
	cout<<" ";
	for(int x=0;x<sp;x++)
	{
		cout<<a[x];
	}
	return 0;
}