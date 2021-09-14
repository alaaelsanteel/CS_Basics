#pragma once
#include <iostream>
using namespace std;
class person
{
private :
	string name;
	string gander;
	float age;
public:
	person()
	{
		name = "unknow";
		gander = "unknow";
		age = 0;
	}
	person(string n, string g, float a)
	{
		name = n;
		gander = g;
		age = a;

	}
	void setage(float a)
	{
		age = a;
	}
	float  getage ()
	{
		return age;
	}
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	void setgender(string g)
	{
		gander = g;
	}
	string getgender()
	{
		return gander;
	}
	void display()
	{
		cout << name << " " << gander << " " << age << "\n";
	}
};

