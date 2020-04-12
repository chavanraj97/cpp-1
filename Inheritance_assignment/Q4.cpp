/*4)Create a base class FourWheeler. Declare pure virtual function “void start()” in it. 			
Define following sub classes for this class. 
A) Qualis b) Sumo c) Volvo 					
Define “start” function in these classes.In main function , create array of pointer to FourWheeler which will
contain objects of these three sub classes. Now traverse the array and call all the child class methods.*/
#include <iostream>
using namespace std;

class FourWheeler
{
public:
	virtual void start()=0; // declaring Pure virtual function

};

class Qualis : public FourWheeler
{
public:
	void start()
	{
		cout<<"Qualis has started"<<endl;
	}
};

class Sumo : public FourWheeler
{
public:
	void start()
	{
		cout<<"Sumo has started"<<endl;
	}
};

class Volvo : public FourWheeler
{
public:
	void start()
	{
		cout<<"Volvo has started"<<endl;
	}
};

void function (FourWheeler *xyz)
{
	xyz->start();
}
int main()
{   /*Objects created on stack*/
	/*Qualis Q;
	Sumo  S;
	Volvo V;
	FourWheeler *ptr[3]={&Q,&S,&V};
	for (int i = 0; i < 3; i++)
     {
		function(ptr[i]);     
     }*/

	/*Objects created on heap*/
	FourWheeler *ptr[3]={new Qualis, new Sumo, new Volvo};
	for (int i = 0; i < 3; i++)
     {
		function(ptr[i]);     
     }
	for (int i = 0; i < 3; i++)
     {
		delete ptr[i];
		ptr[i]= NULL;
     }
	return 0;
}