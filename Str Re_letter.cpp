#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the input:"<<endl;
	cin>>s;
	int c,n=s.length();
	char arr[n];
	strcpy(arr,s.c_str());
	for(int j=0;j<n;j++)
	{
		c=0;
		for(int i=0;i<n;i++)
		{
			if(arr[j]==arr[i])
		   {
		   	c++;
		   }
		 }
		 if(c==1)
		 {
 			cout<<arr[j];
 		}
	}	
   return 0;
}
