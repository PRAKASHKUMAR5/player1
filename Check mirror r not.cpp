#include <iostream>
using namespace std;
class mirror
 {
 	public:
 	int l,c=0,j;
 	public:
 	int get()
 	{
 	cout <<"Enter array length:"<<endl;
 	cin>>l;
 	int arr1[l],arr2[l];
 	cout<<"Enter 1st row:"<<endl;
 	for(int i=0;i<l;i++)
 	{
 		cin>>arr1[i];
 	}
 	cout<<"Enter 2nd row:"<<endl;
 	for(int i=0;i<l;i++)
 	{
 		cin>>arr2[i];
 	}
 	for(int i=l-1;i>=0;i--)
 	{
 		if(arr1[i]==arr2[j])
 			{
 				c++;
 			}
 			j++;
 	}
 	}
 	int check()
 	{
 	if(l==c)
 	{
 		cout<<"Yes"<<endl;
 	}
 	else
 	{
 		cout<<"No"<<endl;
 	}
 	}
 };
 int main()
 {
 	mirror m;
 	m.get();
 	m.check();
    return 0;
 }