/*5) Define a class with constructor and  member function
create object, call member function now create a reference to that object,
and using that reference try to call member function*/

#include<iostream>
using namespace std;
class myclass
{
private: int num;
public: myclass()
		{
			this->num=0;
			cout<<"inside constructor"<<endl;
		}
		myclass(int k)
		{
			this->num=k;
			cout<<"inside Param constructor"<<endl;
		}
		~myclass()
		{
			cout<<"inside destructor"<<endl;
		}
		void getnum()
		{  
			cout<<"Inside Disp1"<<endl;
			cout<<num<<endl;
		}
};

int main()
{
	myclass o1;
	myclass o2(10);
	o2.getnum();
	o1.getnum();
	myclass &a = o1;
	a.getnum();
	return 0;
}