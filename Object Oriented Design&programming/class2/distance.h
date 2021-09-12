
#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance();
	Distance(int f, float i);
	Distance add_distance(Distance d2);
	void setdistance(int f, float i);
	void print();
	~Distance();

};

