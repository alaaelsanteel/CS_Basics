#pragma once
#include "student.h"
class postgraduatestudent :  public student
{
private:
	string research;
public :
	postgraduatestudent(string n, string g, float a, int l, float gp, string d,string re)
		:student(n,g,a,l,gp,d)
	{
		research = re;
	}
		//7 parameters << 3 from person class , 3 from student class,1 from this class
	void setresearch(string r)
	{
		research = r;
	}
	string getresearch()
	{
		return research;
	}

	void display()
	{
		student::display();
		cout << research << "\n";
	}
};

