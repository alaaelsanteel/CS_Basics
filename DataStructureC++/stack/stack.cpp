
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
template <class t>
class stack
{

    int top;
    t items[MAX_SIZE];
public:
    stack():top(-1){}     //usng the defult constractor to initialize the top

    void push(t element)
    {
        if (top >= MAX_SIZE - 1)
            cout << "stack full on push" << endl;
        else
        {
            top++;
            items[top] = element;
        }

    }
    bool isEmpty()
    {
        return top < 0;
        //if (top == -1)
           // return true;
        //else
          //  return false;
    }
    void pop()
    {
        if (isEmpty()) //true
            cout << "stack is empty to pop";
        else
           top--;

    }
    void pop(t&element)  //override and call by reference insted of using the return value type
    {
        if (isEmpty()) 
            cout << "stack is empty to pop";
        else
        {
            element = items[top];
            top--;
        }

    }
    void gettop(t&stacktop)
    {
        if (isEmpty()) 
            cout << "stack is empty on getTop";
        else
        {
            stacktop = items[top];
           cout << stacktop << endl;
        }


    }
    void print()
    {
        cout << "[";
        for(int i=top;i>=0;i--)  //last in first out 
        { 
            cout << items[i] << " ";
        }
        cout << "]"<<endl;
    }

};

int main()
{
    stack <int>s;    //generic we can use diffrent data types
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();          //[20,15,10,5]
    int y = 0;
    s.gettop(y);       //20
    s.pop();          //delets 20
    s.push(7);        //[7,15,10,5]

}