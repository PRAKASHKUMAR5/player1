#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x=0;
    cin>>a;
  while(a>0)
    {
        b=a%10;
        c=a/10;
        x+=b*b;
        a=c;
    }
    cout<<x;
    return 0;
}
