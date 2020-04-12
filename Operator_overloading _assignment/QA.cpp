#include<iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	MyClass(int k);
	~MyClass();
	void operator+(MyClass &ref);
private:
	int num;
};

MyClass::MyClass(int k)
{
	this->num=k;
	cout<<"inside Parameter constr"<<endl;
}

MyClass::MyClass()
{
	num=0;
	cout<<"inside Default constr"<<endl;
}

MyClass::~MyClass()
{
		cout<<"inside Destr"<<endl;
}

void MyClass::operator+(MyClass &ref)
{
	cout<<num+ref.num<<endl;
}

int main()
{
	MyClass o;
	MyClass o1(40);
	MyClass o2(45);
	MyClass o3(15);
	
	o1+o2;
	//o1+o2+o3; //error
	return 0;
}