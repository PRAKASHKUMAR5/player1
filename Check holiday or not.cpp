#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int l=a.length();
	char s[l];
	strcpy(s,a.c_str());
	if(s[0]=='S'|| s[0]=='s')
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}