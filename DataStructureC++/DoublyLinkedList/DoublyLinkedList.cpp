#include <iostream>
using namespace std;
class doublyLinkedList
{
    struct Node
    {
        int item;
        Node* next;
        Node* prev;
    };
    Node* first, * last;
    int count;
public:
    doublyLinkedList():first (NULL),last(NULL),count(0){}
    bool isEmpty()
    {
        return (first == NULL);
    }
    void insertFirst(int element)
    {
        Node* newnode = new Node;
        newnode->item = element;
        if(count==0)
        {
            first = last = newnode;
            newnode->next = newnode->prev = NULL;
        }
        else
        {
            newnode->next = first;
            newnode->prev = NULL;
            first->prev = newnode;
            first = newnode;
        }
        count++;
    }
    void insertLast(int element)
    {
        Node* newnode = new Node;
        newnode->item = element;
        if (count == 0)
        {
            first = last = newnode;
            newnode->next = newnode->prev  = NULL;
        } 
        else
        {
            newnode->next = NULL;
            newnode->prev = last;
            last->next = newnode;
            last = newnode;
        }
        count++;
    }
    void insertAtPos(int pos, int element)
    {
        if (pos<0 || pos >count)
            cout << "Out Of Range \n";
        else
        {
            Node* newnode = new Node;
            newnode->item = element;
            if (pos == 0)
                insertFirst(element);
            else if (pos == count)
                insertLast(element);
            else
            {
                Node* cur = first;
                for (int i = 1; i < pos; i++)
                {
                    cur = cur->next;
                }
                newnode->next = cur->next;
                newnode->prev = cur;
                cur->next->prev = newnode;
                cur->next =newnode;
                count++;
            }
        }

    }
    void removFirst()
    {
        if (count == 0)
            cout << "Empty\n";
        else if (count == 1)
        {
            delete (first);
            first = last = NULL;
        }
        else
        {
            Node* cur = first;
            first = first->next;
            first->prev = NULL;
            delete(cur);
        }
        count--;
    }
    void removeLast()
    {
        if (count == 0)
            cout << "Empty\n";
        else if (count == 1)
        {
            delete first;
            first = last = NULL;
        }
        else
        {
            Node* cur = last;
            last = last->prev;
            last->next = NULL;
            delete cur;
        }
        count--;
    }
    void removeAtPos(int pos, int element)
    {
        if (count == 0)
            cout << "Empty\n";
        else if (first->item == element)
            removFirst();
        else
        {
            Node* cur = first->next;
            while (cur != NULL)
            {
                if (cur->item == element)
                    break;
                cur = cur->next;
            }
            if (cur == NULL)
                cout << "Not Found\n";
            else if (cur->next == NULL)
                removeLast();
            else
            {
                cur->prev->next = cur->next;
                cur->next->prev = cur->prev;
                delete cur;
            }
        }
    }
    void display()
    {
        Node* cur = first;
        while (cur != NULL)
        {
            cout << cur->item << " ";
            cur = cur->next;
        }
        cout << endl;
    }
    void reverseDisplay()
    {
        Node* cur = last;
        while (cur != NULL)
        {
            cout << cur->item << " ";
            cur = cur->prev;
        }
        cout << endl;
    }
};
int main()
{
    doublyLinkedList d;
    d.insertFirst(10);
    d.insertAtPos(1,20);
    d.insertAtPos(2, 30);
    d.insertAtPos(3, 40);
    d.display();
    d.reverseDisplay();

}
