#include <iostream>
#include "student.h"
#include "postgraduatestudent.h"
using namespace std;
void main()
{
 postgraduatestudent s1("alaa", "female", 15, 5, 3.5, "cs","nano");
	s1.display();
}
/*class base
{
	int x;
public:
	base()   //defult costractor
	{
		x = 0;
		cout << "base defult constractor\n";
	}

};

class derived : public base
{
	int y;
public:
	derived()    //defult constractor 
	{
		y = 0;
		cout << "derived defult constractor \n";
	}
	derived(int i)      //parameterized constractor
	{
		y = i;
		cout << "derived parameterized\n";
	}


};

void main()
{
	


		base b;
	//the output will be the(base) defult constractor only

	derived d1;
	//no parameters means we're using the defult constractor
	//the output will be both the(base) defult constractor and (derived)defult constractor

	derived d2(10);
	//paramrterized constractor
	//the output will be both the(base) defult constractor and (derived)defult constractor



}*/


