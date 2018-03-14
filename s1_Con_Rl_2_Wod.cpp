#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a[20]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
  string b[20]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
  string s;
  cout<<"Enter the input :"<<endl;
  cin>>s;
  for(int i=0;i<20;i++)
  {
      if(a[i]==s)
      {
          cout<<b[i];
      }
  }
  return 0;
}
