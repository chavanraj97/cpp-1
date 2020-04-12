#include <iostream>
using namespace std;
class parent
{  
	public:
		 void disp1()
		{
			cout<<"In Disp 1"<<endl;
		}
		void disp2()
		{
			cout<<"In Disp 2"<<endl;
		}
		void disp3()
		{
			cout<<"In Disp 3"<<endl;
		}
		void disp4()
		{
			cout<<"In Disp 4"<<endl;
		}
		/*parent ()
		{
			cout<<"In default constructor of base"<<endl;		
		}*/
};
class sub:private parent
{	int a;
	public:
		void disp5()
		{
			cout<<"In Disp 5"<<endl;
		}
		sub (int a): parent ()
		{
			this->a=a;
			cout<<"In Param constructor of sub"<<endl;		
		}
		parent::disp1; //no barckets as it is not a calling function
		parent::disp3;
};

int main()
{
	sub s(30);
	s.disp5();
	s.disp3();
	s.disp1();
	return 0;
}