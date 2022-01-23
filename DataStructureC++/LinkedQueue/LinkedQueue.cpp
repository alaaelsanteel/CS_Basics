#include <iostream>
#include<cassert>
using namespace std;
class linkedqueue
{
private:
	struct  Node 
	{
		int item;
		Node* next;
	};
	Node* frontptr; //the front and rear pointers
	Node* rearptr;
	int length;
public:
	linkedqueue() :frontptr(NULL),rearptr(NULL),length(0){}
	bool isEmpty()
	{
		return length == 0;
	}
	void enqueue(int element)
	{
		if (isEmpty())
		{
			frontptr = new Node;
			frontptr->item = element;
			frontptr->next = NULL;
			rearptr = frontptr;
			length++;
		}
		else
		{
			Node* newptr = new Node; //new pointer points to the new node
			newptr->item = element;
			newptr->next = NULL;
			rearptr->next = newptr; //the next to the rear pointer is the newptr
			rearptr = newptr;
			length++;
		}
		/*Node* newptr = new Node;
		newptr->item = element;
		newptr->next = NULL;
		if (length == 0)
		{
			rearptr = frontptr = newptr;
		}
		else
		{
			rearptr->next = newptr;
			rearptr = newptr;
		}
		length++;*/
	}
	void dequeue()
	{
		if (isEmpty())
			cout << "Empty Queue..\n";
		else
		{
			Node* tempptr = frontptr;
			if (frontptr == rearptr)//length==1
			{
				frontptr = NULL;
				rearptr = NULL;
				length--;
			}
			else
			{
				frontptr = frontptr->next;
				tempptr->next = NULL;
				delete tempptr; //or free(tempptr)
				length--;
			}
		}
	}
	int getfront()
	{
		assert(!isEmpty());
		return frontptr->item;
	}
	int getrear()
	{
		assert(!isEmpty());
		return rearptr->item;

	}
	void display()
	{
		Node* cur = frontptr;
		cout << "[";
		while (cur != NULL)
		{
			cout << cur->item << " ";
			cur = cur->next;
		}
		cout << "]\n";
	}
	void clearQueue()
	{
		Node* current;
		while (frontptr != NULL)
		{
			current = frontptr;
			frontptr = frontptr->next;
			delete current;
		}
		rearptr = NULL;
		length = 0;
	}
	int getsize()
	{
		return length;
	}
};
int main()
{
	linkedqueue q1;
	q1.enqueue(100);
	q1.enqueue(200);
	q1.enqueue(300);
	q1.display();
	cout<<q1.getsize()<<"\n";
	cout << q1.getfront()<<"\n";
	cout << q1.getrear()<<"\n";
	q1.clearQueue();
	q1.display();

}
