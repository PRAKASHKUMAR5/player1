#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,s=0;
    cout<<"Enter the input:"<<endl;
    cin>>n;
    while(n>0)
    {
        temp=n%10;
        s+=pow(temp,2);
        n=n/10;
    }
    cout<<s;
    return 0;
}
