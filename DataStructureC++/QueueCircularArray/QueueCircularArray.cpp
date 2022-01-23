#include <iostream>
#include<cassert>
using namespace std;
//const int MAX_SIZE = 100;
class arrayQueueType
{
    int rear;
    int front;
    int length;
    int *arr; //dynamic array
    int maxsize;
public:
    arrayQueueType(int size) :front(0), rear(maxsize - 1), length(0) 
    {
        if (size <= 0)
            maxsize = 100;
        else
            maxsize = size;
        arr = new int[maxsize];
    }
    
    int isEmpty()
    {
        return length == 0;
    }
    bool isFull()
    {
        return length == maxsize;
    }
    void addQueue(int element)
    {
        if (isFull())
            cout << "Queue full, can't Enqueue..\n";
        else
        {
            rear = (rear + 1) % maxsize;
            arr[rear] = element;
            length++;
        }
    }
  
    void deleteQueue()
    {
        if (isEmpty())
            cout << "Queue is empty,can't delete..\n";
        else
        {
            front = (front + 1) % maxsize;
            length--;
        }
    }
    int getFront()
    {
        assert(!isEmpty()); //if it's not empty print the front element
          return arr[front];
    }
    int getRear()
    {
        assert(!isEmpty()); //if it's not empty print the rear element
        return arr[rear];
    }
    int queuesearch(int element)
    {
        int pos = -1;
        if (!isEmpty())
        {
            for (int i = front; i != rear ; i = (i + 1) % maxsize)
            {
                if (arr[i] == element)
                {
                    pos = i;
                    break;
                }
                if(pos==-1)
                { 
                    if (arr[rear] == element)
                        pos = rear;

                }
               
            }
            
        }
        else
            cout << "Not Found..";
        return pos;

    }
    void display()
    {
        if (!isEmpty())
        {
            for (int i = front; i != rear; i = (i + 1) % maxsize) // all elements except the rear element we  can use( i != rear+1) insted of print the rear element outside the loop
            {
                cout << arr[i] << " ";
            }
            cout << arr[rear] << endl;
        }
        else
            cout << "Empty\n";
    }

};
int main()
{
    arrayQueueType q1(4);
    q1.addQueue(10);
    q1.addQueue(20);
    q1.addQueue(30);
    q1.addQueue(40);
    q1.display();

    cout << q1.getFront() << endl;
   cout<< q1.getRear()<<endl;

    q1.deleteQueue();
    q1.addQueue(50);
    q1.display();

    cout << q1.getFront() << endl;
   cout<< q1.getRear()<<endl;
   cout << q1.queuesearch(50) << endl;

}

