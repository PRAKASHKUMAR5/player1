#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    cin>>str>>str1;
   int n=str.length(),c=0;
   int n1=str1.length();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(str[i]==str1[j])
            {
                c++;
            }
        }
    }
    if(c==n1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
