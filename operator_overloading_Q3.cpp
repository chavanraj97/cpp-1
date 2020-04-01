///*write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
//call this "check" function from main function.	*/
//#include<iostream>
//using namespace std;
//class Module1;
//class Module2
//{
//	int num2;
//	public:
//		Module2(int k)
//		{
//			this->num2=k;
//		}
//		int getnum()
//		{
//			return num2;
//		}
//
//		friend void check (Module1 &);
//};	
//class Module1
//{
//	int num1;
//	public:
//		Module1(int k)
//		{
//			this->num1=k;
//		}
//		int getnum()
//		{
//			return num1;
//		}
//
//		friend void Module1 :: check (Module1 &);
//};
//
//
//
//void Module2 :: check(Module1 &ref)
//{
//	if(num ==ref.num)
//	{
//		cout<<"SAME"<<endl;
//	}
//}
