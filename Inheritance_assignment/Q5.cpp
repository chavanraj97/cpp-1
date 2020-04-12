/*5)Define a class “MyNum” having a member variable “int num” and “void disp()”;	
	From main function, perform following				
	a) MyNum m1(20);						
	b) m1=100; //Do not use Constructor for this purpose			
	c) int k;						
	d) k=m1;							
	e) cout<<endl<<k<<endl;*/
#include <iostream>
using namespace std;
class MyNum
{
private :
	int num;
public:
	MyNum(int a)
	{
		this->num=a;
		cout<<"Inside param Constructor"<<endl;
	}
	~MyNum()
	{
	cout<<"Inside Destructor"<<endl;
	}
	void disp()
	{
		cout<<num<<endl;
	}
	void operator = (int b)
	{
		cout<<"Inside assignment operator overloading"<<endl;
		num=b;

	}
	 operator int()
	{
		cout<<"Inside operator overloading"<<endl;
		return num;
	}
};

int main()
{
	MyNum m1(20);
	m1.disp();
	m1=100;
	m1.disp();
	int k;
	k=m1;
	cout<<endl<<k<<endl;
	return 0;
}