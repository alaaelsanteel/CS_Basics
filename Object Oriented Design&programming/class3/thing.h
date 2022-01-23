#pragma once
class thing
{
private:
	int length;
	float inch;
public:
	thing();
	thing(int l, float i);
	~thing();
	void setthing(int l, float i);
	void print();
};

