#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;
        
        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }
        
        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;
            newn -> prev = NULL;
            
            if((head == NULL) && (tail == NULL))
            {
                head = newn;
                tail = newn;
            }
            else
            {
                newn -> next = head;
                head -> prev = newn;
                head = newn;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount++;
        }
        
        void InsertLast(int no)
        {
        
        }
        
        void DeleteFirst()
        {
        
        }
        
        void DeleteLast()
        {
        
        }
        
        void InsertAtPos(int no, int ipos)
        {
        
        }
        
        void DeleteAtPos(int ipos)
        {
        
        }
        
        void Display()
        {
        
        }
        
        int Count()
        {
            
        }
        
};

int main()
{
    DoublyCL dobj;
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    return 0;
}