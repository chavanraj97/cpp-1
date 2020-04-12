/*6) create a base1 and base2 classes in the library.
constructors, member variables and functions you can have in the above classes of your choice.

now create an application where you have to create a child class of above classes.
in the main function create an instance of child class and try to access methods of base1 and base2.*/
#include <iostream>
using namespace std;
#include "Header.h"
class child: public base1,public base2
{
public:
	void display()
	{
	cout<<"inside child display"<<endl;
	}
};

int main()
{
	child c1;
	c1.disp1();
	c1.disp2();
	c1.display();
	return 0;
}