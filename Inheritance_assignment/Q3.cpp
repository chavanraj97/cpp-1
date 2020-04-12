#include <iostream>
using namespace std;
class course
{
public:
	virtual void fees()
	{
	cout <<"Inside Course fees"<<endl; 
	}
};
class DacCourse:public course
{
	void fees()
	{
	cout <<"Inside DacCourse fees"<<endl; 
	}
};

int main()
{
	course *c=new course;
	c->fees(); // course version should be called
	c=new DacCourse;
	c->fees();  // DacCourse version should be called

return 0;
}