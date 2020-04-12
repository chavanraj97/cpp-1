/*1) class Number
   {
       int num;
   }
In the main function,
Number n1(8),n2(4),n3(20),n4(6),n5;
n5=n1-n2*n3/n4;*/
#include<iostream>
using namespace std;
class Number
{
public:
	Number();
	Number(int k);
	~Number();
    Number operator+(Number &ref);
	Number operator-(Number &ref);
	Number operator*(Number &ref);
	Number operator/(Number &ref);
	int getnum();
private:
	int num;
};

Number::Number(int k)
{
	this->num=k;
	cout<<"inside Parameter constr"<<endl;
}

Number::Number()
{
	num=0;
	cout<<"inside Default constr"<<endl;
}

Number::~Number()
{
		cout<<"inside Destr"<<endl;
}

int Number:: getnum()
	{
	return num;
	}
Number Number::operator+ (Number &ref)
{
	return Number (num+ref.num);
}

Number Number::operator- (Number &ref)
{
	return Number (num-ref.num);
}

Number Number::operator* (Number &ref)
{
	return Number (num*ref.num);
}

Number Number::operator/ (Number &ref)
{
	return Number (num/ref.num);
}
int main()
{
	Number n1(16),n2(4),n3(24),n4(6),n5;
	n5=n1-n2*n3/n4;
	cout<<n5.getnum()<<endl;
	return 0;
}