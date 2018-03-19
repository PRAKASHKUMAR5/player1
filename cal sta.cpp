#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,x;
  cout<<"Enter the input:"<<endl;
  cin>>a>>b>>c;
  if(a<=1000000000 && b<=1000000000 && c<=1000000000)
  {
  x=pow(a,b);
  x=x%c;
  cout<<x;
  }
  else
  {
      cout<<"invalid input";
  }
  return 0;
}
