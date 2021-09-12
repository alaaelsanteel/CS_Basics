#pragma once
#include "person.h"
#include <iostream>
using namespace std;
class student : public person
{
private:
	int level;
	string depart;
	float GPA;
public:
	student(string n, string g, float a, int l, float gp, string d) :person(n, g, a)//base class
	{
		//derived class
		level = l;
		GPA = gp;
		depart = d;

	}
	void setlevel(int l)
	{
		level = l;
	}
	void setdepart(string d)
	{
		depart = d;
	}
	void setgpa(float g)
	{
		GPA = g;
	}
	int getlevel()
	{
		return level;
	}
	float getgpa ()
	{
		return GPA;
	}
	string getdepart()
	{
		return depart;
	}
	void display()
	{
		person::display(); 
		cout << depart << " " << level << " " << GPA <<"\n";
	}
};

