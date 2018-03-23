#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the input:"<<endl;
    cin>>s;
    int l=s.length();
    char a[l];
    strcpy(a,s.c_str());
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            a[i]=' ';
        }
    }
    for(int i=l-1;i>=0;i--)
    {
        if(a[i]!=' ')
        {
            cout<<a[i];
        }
    }
    return 0;
}
