#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,s;
  cout<<"Enter the input:"<<endl;
  cin>>a>>b>>c;
  s=pow(a,b);
  s=s%c;
  cout<<s;
  return 0;
}
