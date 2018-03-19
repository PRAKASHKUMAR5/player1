#include <iostream>
using namespace std;
int main()
{
  int n,s=0;
  cout<<"Enter the input:"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for(int j=0;j<n;j++)
  {
      if(arr[j]<0)
      {
          s+=arr[j];
      }
  }
  cout<<s;
  return 0;
}
