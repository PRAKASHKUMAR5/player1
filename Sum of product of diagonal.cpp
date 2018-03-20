#include<iostream>
using namespace std;
int main()
{
   int n,s=1,s1=1;
   cout<<"Enter the array size:"<<endl;
   cin>>n;
   int a[n][n],i,j;
   cout<<"Enter the array element:"<<endl;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               s*=a[i][j];
           }
       }
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        s1*=a[i][j];
    }
   cout<<s+s1;
    return 0;
}
