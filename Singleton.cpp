#include <iostream>
using namespace std;
class single
{
private:
	static single s;
	single()
	{
	cout<<"Inside Constructor"<<endl;
	}
	single (single &ref)
	{
		cout<<"Inside Copy Constructor"<<endl;
	}
	~single()
	{
	cout<<"Inside Destructor"<<endl;
	}
public:
	
	void disp()
	{
	cout<<"Inside Display method"<<endl;
	}
	static single& getSingle()
	{
	cout<<"Inside Object Returning method"<<endl;
	return s;
	}
};

single single::s;

int main()
{
	single &ref= single::getSingle();
	ref.disp();
	return 0;
}