#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    public:
        PNODE head;
        int iCount;
        
        Stack()
        {
            head = NULL;
            iCount = 0;
        }
        
        void Push(int no)        // inserFirst()
        {
            PNODE newn = NULL;
            newn = new NODE();
            newn -> data = no;
            newn -> next = NULL;
            
            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn -> next = head;
                head = newn;
            }
            iCount++;
        }
        
        int Pop()        // DeleteFirst()
        {
            
        }
        
        void Display()
        {
            
        }
        
        int Count()
        {
            return 0;
        }
};

int main()
{
    Stack sobj;
    
    sobj.Push(101);
    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);

    return 0;
}