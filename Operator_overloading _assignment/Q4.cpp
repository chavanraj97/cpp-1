/*Define a class , write two member functions 
	void disp1(){ //some code }
	void disp2(){ // some code }
	Try to call disp1   from    disp2.*/

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
		void disp1()
		{  
			cout<<"Inside Disp1"<<endl;
			cout<<num<<endl;
		}
		void disp2()
		{  
		cout<<"Inside Disp2"<<endl;
		disp1();
		}

};

int main()
{
	myclass o1;
	myclass o2(10);
	o2.disp2();
	o1.disp2();
	return 0;
}