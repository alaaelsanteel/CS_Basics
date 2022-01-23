#include <iostream>
using namespace std;
class linkedlist
{
    struct Node
    {
        int item;
        Node* next;

    };
    Node* first;
    Node* last;
   int length;
public:
   linkedlist() :first(NULL), last(NULL),length(0){}
   bool isEmpty()
   {
       return length == 0;
   }
   void insertFirst(int element)
   {
       Node* newnode = new Node;
       newnode->item = element;
       if (length == 0)
       {
           first = last = newnode;
           newnode->next = NULL;
       }
       else
       {

           newnode->next = first;
           first = newnode;
       }
       length++;
   }
   void insertLast(int element)
   {
       Node* newnode = new Node;
       newnode->item = element;
       if (length == 0)
       {
           first = last = newnode;
           newnode->next = NULL;
       }
       else
       {
           last->next = newnode;
           newnode->next = NULL;
           last = newnode;
       }
       length++;
   }
   void insertatpos (int pos, int element)
   {
       if (pos <0 || pos >length)
           cout << "Out of Range\n";
       else
       {
           Node* newnode = new Node;
           newnode->item = element;
           if (pos == 0)
               insertFirst(element);
           else if (pos == length)
               insertLast(element);
           else
           {
               Node* cur = first;
               for (size_t i = 1; i < pos; i++)
               {

                   cur = cur->next;
               }
               
               newnode->next = cur->next;
               cur->next = newnode;
               length++;
              
           }
       }
   }
   void removeFirst() //popFront
   {
       if (length == 0)
           cout << "Empty list\n";
       else if (length == 1)
       {
           delete first; //free(first)
           first = last = NULL;
           length--;
       }
       else
       {
           Node* temp = first;
           first = first->next;
           delete temp;
           length--;
       }
   }
   void remove(int element)
   {
       if (isEmpty())
       {
           cout << "Empty list \n";
           return;
       }
       Node* cur, * prev;
       if (first->item == element)
       {
           cur = first;
           first = first->next;
           delete cur;
           length--;
           if (length == 0)
               last = NULL;
       }
       else
       {
           cur = first->next;
           prev = first;
           while (cur != NULL)
           {
               if (cur->item == element)
                   break;
               prev = cur;
               cur = cur->next;
           }
           if (cur == NULL)
               cout << "Not Found..\n";
           else
           {
               prev->next = cur->next;
               if (last == cur)
                   last = prev;
               delete cur;
               length--;
           }

       }
   }
   void print()
   {
       Node* cur = first;
       while (cur != NULL)
       {
           cout << cur->item << " ";
           cur = cur->next;
       }
   }
   void reverse()
   {
       Node* prev, *cur, *next;
       prev = NULL;
       cur =first;
       next = cur->next;
       while (next != NULL)
       {
           next = cur->next;
           cur->next = prev;
           prev = cur;
           cur = next;
       }
       first = prev;
   }
   int search(int element)
   {
       Node* cur = first;
       int pos = 0;
       while (cur != NULL)
       {
           if (cur->item == element)
               return pos;
           cur = cur->next;
           pos++;
       }
       return -1;

   }
};
int main()
{
    linkedlist l;
    l.insertFirst(10);
    l.insertLast(30);
    l.insertLast(40);
    l.insertatpos(1, 20);
    l.insertFirst(0);
    l.insertLast(50);
     // l.removeFirst();
    //l.remove(30);
    l.reverse();
    l.print();
    cout<<l.search(50)<<endl;
}
