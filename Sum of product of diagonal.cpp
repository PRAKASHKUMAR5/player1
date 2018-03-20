#include<iostream>
using namespace std;
int main()
{
   int n,s=0,s1=0;
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
               s+=a[i][j];
           }
       }
    }
   for(i=n-1;i>0;i--)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               s1+=a[i][j];
           }
       }
    }
   cout<<s*s1;
    return 0;
}
