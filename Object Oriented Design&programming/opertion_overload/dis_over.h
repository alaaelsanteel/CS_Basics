#pragma once
#include <iostream>
using namespace std;
class dis_over
{
private :
	int feet;
	float inches;
public:
	dis_over() :feet(0), inches(0.0)
	{ }
	dis_over(int f,float i):feet(f),inches(i)
	{ }
	void display()
	{
		cout << "feets" << feet << endl;
		cout << "inches" << inches << endl;

	}
	dis_over operator  + (dis_over d2)
	{
		int f = feet + d2.feet;
		int i = inches + d2.inches;
		return dis_over(f, i);
	}
	dis_over operator - (dis_over d2)
	{
		int f = feet - d2.feet;
		int i = inches - d2.inches;
		return dis_over(f, i);
	}
};

