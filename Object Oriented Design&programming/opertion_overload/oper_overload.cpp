
#include <iostream>
#include "dis_over.h";
using namespace std;
int main()
{
	dis_over d1(3, 4);
	dis_over d2(5, 10);
	dis_over d3 = d1 + d2;
	d3.display();
}


