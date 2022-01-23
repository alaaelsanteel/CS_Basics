#include "thing.h"
#include <iostream>
using namespace std;
thing::thing():length(0),inch(0.0)
{
}

thing::thing(int l, float i):length(l),inch(i)
{
}

thing::~thing()
{
}

void thing::setthing(int l, float i)
{
	length = l;
	inch = i;

}

void thing::print()
{
	cout<< length << " " << inch << "\n";
}
