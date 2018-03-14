#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string b;
	cin>>b;
	int l=b.length();
	char a[l];
	strcpy(a,b.c_str());
	for(int i=0;i<l;i+=2)
	{
		cout<<a[i+1]<<a[i];
		
	}
	return 0;
}
    