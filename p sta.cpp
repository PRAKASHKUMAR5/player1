#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,x;
  cout<<"Enter the input:"<<endl;
  cin>>a>>b;
  if(a<=5 && b<=50 && b>=5)
  {
  x=pow(a,b);
  cout<<x;
  }
  else
  {
      cout<<"invalid input";
  }
  return 0;
}
