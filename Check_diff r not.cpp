#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter two strings:"<<endl;
    cin>>s1>>s2;
    int c=0;
    int l=s1.length();
    int l1=s2.length();
    char a1[l],a2[l1];
    strcpy(a1,s1.c_str());
    strcpy(a2,s2.c_str());
    for(int i=0;i<l;i++)
    {
        if(a1[i]==a2[i])
        {
            c++;
        }
    }
    if(c==l-1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
