/*Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it. 
Define following sub classes for this class. 
A) Maths b) History c) English.	Define “maxmarks” in these classes.
now write a global function "show" which will accept "subject class pointer" as an argument.
this function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.*/

#include <iostream>
using namespace std;

class Subject
{
public:
	void virtual maxmarks()=0;
};

class Maths: public Subject
{
public:
	void maxmarks()
	{
	cout<<"The max marks for Maths is 100"<<endl;
	}
};

class History: public Subject
{
public:
	void maxmarks()
	{
	cout<<"The max marks for History is 50"<<endl;
	}
};

class English: public Subject
{
public:
	void maxmarks()
	{
	cout<<"The max marks for English is 80"<<endl;
	}
};

void function (Subject *xyz)
{
	xyz->maxmarks();
}

int main()
{
	Subject *ptr;
	Maths m1;
	English e1;
	History h1;
	ptr=&m1;
	function(ptr);
	ptr=&e1;
	function(ptr);
	ptr=&h1;
	function(ptr);
	return 0;
}