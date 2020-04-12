#include <iostream>
using namespace std;
class base
{
	char *name;
	public:
		base(char *ptr)
		{
			this->name = new char(strlen(ptr)+1);
			strcpy(this->name,ptr);
		}
		void getname()
		{
			cout<<this->name<<endl;
		}
};
class sub:public base
{
	int num;
	char c;
	double d;
public:
	sub():base("abc")
	{
	cout<<"Inside Sub Default"<<endl;
	}
	sub(int k):base("lmn")
	{
		this->num=k;
		cout<<"inside sub 1 param"<<endl;
		cout<<k<<endl;
	}
	sub(char c , double d):base("xyz")
	{
		this->c=c;
		this->d=d;
		cout<<"inside sub 2 param"<<endl;
		cout<<c<<d<<endl;
	}
};

int main()
{
	sub s;
	sub *s1=new sub(40);
	sub *s2=new sub('a',4.5);
	s.getname();
	s1->getname();
	s2->getname();
	return 0;
}