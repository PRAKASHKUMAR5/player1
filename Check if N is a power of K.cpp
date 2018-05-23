#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,i,a=0,x,count=0;
    cin>>n>>n1;
    a=n/2;
    for(i=0;i<a;i++)
    {
      x=pow(n1,i);
      if(x==n)
      {
          cout<<"yes";
          count++;
      }
    }
    if(count==0)
    {
        cout<<"no";
    }
    return 0;
}
