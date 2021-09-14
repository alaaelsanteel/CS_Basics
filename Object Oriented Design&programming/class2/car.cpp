#include "car.h"
int car::count = 0; //intializing thr counter
car::car():maker("toyota"),model(2019),color("white")
{
	count++;
}
car::car(string m, int mo, string c):maker(m),model(mo),color(c)
{
	count++;
}
car :: ~car()
{
	count--;
}
void car::setmaker(string m)
{
	 maker=m ;

}

string car ::getmaker()
{
	return maker;
}
void car::setmodel(int mod)
{
	model = mod;
}
int car::getmodel()
{
	return model;
}

int car::getcarscount()
{
	return count;
}

