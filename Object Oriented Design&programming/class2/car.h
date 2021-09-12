#include<iostream>
using namespace std;

class car
{
private:
	string maker;
	int model;
	string color;
	 static int count ;

public :
	void setmaker(string m);
		string getmaker();
		void setmodel(int mol);
		int getmodel();
		int getcarscount();
		car();
		car(string m, int mo, string c);
		~car();

};


