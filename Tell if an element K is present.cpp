#include<iostream>
using namespace std;
int main ()
{
   int n,a,c=0;
   cin>>n>>a;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(arr[i]==a)
       {
           c++;
       }
   }
   if(c>0)
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
    return 0;
}
