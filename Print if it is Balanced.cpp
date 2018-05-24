#include<iostream>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int l=str.length(),c1=0,c2=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]=='(')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1==c2)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
