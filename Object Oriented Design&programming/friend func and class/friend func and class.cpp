#include <iostream>
using namespace std;
class person
{
private:
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
	
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	friend void print(person p);    //friend function ,it's not a member function and it can't be inherted

	friend class  printclass;    //friend class and it can't be inherted 
	
};
class printclass //frienf class
{
public :
	void fprint(person  s)
	{
		cout << "name = " << s.name << " age =" << s.age << " gander= " << s.gander << endl;
	}
};
void print(person p) //friend fuction
{
	cout << "name: " << p.name << " age: " << p.age << " gander: " << p.gander << endl;
	//all of the methodes are private but we manadged to use them because of the friend function 
}
int main()
{
	person a("alaa","female",19);
	print(a);
  
    person b("asma","female",20);
	printclass d;
	d.fprint(b);

}