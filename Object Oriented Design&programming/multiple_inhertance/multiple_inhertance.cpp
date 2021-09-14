#include <iostream>
using namespace std;
class employee
{
private :
    string name;
    string job;
    float salary;
public:
    employee():name("unknown"),job("unknown"),salary(0.0)
    {}
    employee(string n, string j, float s)
    {
        name = n;
        job = j;
        salary = s;
    }
    void setsalary(float s)
    {
        salary = s;
    }
    void setjob(string j)
    {
        job = j;
    }
    void setname(string n)
    {
        name = n;
    }
    void display()
    {
        cout << name << " " << job << " " << salary << "\n";
    }
    
};
class student
{
private :
    string name;
    string depart;
    string research;
public :
    student(string d, string r) :depart(d), research(r)
    {

    }
    void setdepart(string d)
    {
        depart = d;
    }
    void setresearc(string r)
    {
        research = r;
    }
    void setname(string n)
    {
        name = n;
    }
    void display()
    {
        cout << depart << " "<< research << " " << name << "\n";
    }

};
class teachingAssistant : public employee, public student
{
public:
    teachingAssistant(string n, string j, float s, string d, string r) :employee(n, j, s), student(d, r)
    {

    }
    void display()
    {
        employee::display();
        student::display();
    }
};

void main()
{
    teachingAssistant t("alaa", "IT", 8000, "cs", "cloud");
    t.setsalary(9000);
    t.employee::setname("asma"); //changing the name in the employee class
    t.display();
}

