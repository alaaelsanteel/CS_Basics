#include "distance.h"
Distance::Distance():feet(0),inches(0.0)
{
}

Distance::Distance(int f, float i):feet(f),inches(i)
{
}

Distance Distance::add_distance(Distance d2)
{
	Distance result;
	 result.feet =feet + d2.feet;
	result .inches=  inches + d2.inches;
	return result;
}

void Distance::setdistance(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance::print()
{
	cout << "feet = " << feet << " " << "inches = " << inches << "\n";
}

Distance::~Distance()
{
}
