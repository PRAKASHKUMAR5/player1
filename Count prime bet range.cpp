#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,e,c,count=0;
    cout<<"Enter the limits:"<<endl;
    cin>>s>>e;
  for(int i=s;i<=e;i++)
   {
       c=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
            
        }
        if(c==0)
        {
            count++;
        }
   }
    cout<<count;
    return 0;
}
