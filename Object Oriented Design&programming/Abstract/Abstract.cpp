#include <iostream>
using namespace std;
class shape
{
	//abstract class that we can't take objects from

	string color;
public:
	shape(string c)
	{
		color = c;
	}
	//pure virtual methods
	virtual int area() = 0;
	
	virtual  void draw() = 0;

	virtual void erase() = 0;
	virtual void display() final  //final classifier this methoud can't be overriden
	{
		cout << "this is shape" << endl;
	}

};
class rectangle :public shape
{
private:
	int length;
	int width;
public:
	rectangle(int l, int w, string c) :shape(c)
	{
		length = l;
		width = w;
	}
	int area()    //override ll old  methoud 
	{
		cout << "ractangle class area:" << width * length << "\n";
		return (width * length);
	}
	void draw()
	{
		cout << "draw rectangle " << endl;
	}
	void erase()
	{
		cout << " rectangle erased " << endl;
	}









};
class circle :public shape
{
private:
	int  radius;
public:
	circle(int r, string c) :shape(c)
	{
		radius = r;
	}
	int area()    //override ll privious methods
	{
		cout << "circle area :" << 3.14 * radius * radius << endl;
		return (3.14 * radius * radius);
	}
	void draw()
	{
		cout << "draw circle" << endl;
	}
	void erase()
	{
		cout << "circle erased" << endl;
	}

};

int main()
{
	shape* shape_pointer;
	rectangle rec(10, 7, "red");
	circle c(5, "yellow");
	shape_pointer = &rec;   //the shape_pointer point to rec ely f el rectangle class
	shape_pointer->area();
	shape_pointer->draw();

	shape_pointer = &c;
	shape_pointer->area();
	shape_pointer->draw();

}

