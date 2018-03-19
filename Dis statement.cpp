#include <iostream>
using namespace std;
class stat
{
	public:
	int a,b,x,y;
	public:
	int get()
	{
		cout<<"Enter the values:"<<endl;
		cin>>a>>b>>x;
	}
	int process()
	{
		y=(a*x)+b;
		cout<<y;
	}
};
int main()
 {
 	stat s;
 	s.get();
 	s.process();
 	return 0;
 }