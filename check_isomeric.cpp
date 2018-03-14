#include<iostream>
#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"Enter the input:"<<endl;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int c=0,d=0,c1=0,d1=0;
	char a1[l1],a2[l2];
	strcpy(a1,s1.c_str());
	strcpy(a2,s2.c_str());
	for(int i=0;i<l1;i++)
	{
		if(a1[i]==a1[i+1])
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	for(int j=0;j<l2;j++)
	{
		if(a2[j]==a2[j+1])
		{
			c1++;
		}
		else
		{
			d1++;
		}
	}
	if(c1==c&&d1==d)
	{
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	return 0;
}
    