#include<iostream>
using namespace std;
class g
{
	public:
	int a,b;
	void stat();
};
void g::stat()
{
	cout<<"the a value is:"<<a<<endl;
	cout<<"the b value is"<<b<<endl;
}
main()
{
	g g1:
	g1.stat();
}
