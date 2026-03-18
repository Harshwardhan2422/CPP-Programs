#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        node *prev;
    
        node(int x)
        {
            data = x;
            next = NULL;
            prev = NULL;
        }
};

typedef node NODE;
typedef node* PNODE;

class DoublyLL
{
    public:
    
        PNODE head;
        
        DoublyLL()
        {
            head = NULL;
        }
        
        void InsetFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE(no);
            newn -> data = no;
            newn -> next = NULL;
            newn -> prev = NULL;
            
            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn -> next = head;
                head -> prev = newn;
                head = newn;
            }
        }
};

int main()
{
    DoublyLL dobj;
    int iRet = 0;
    
    dobj.InsetFirst(51);
    dobj.InsetFirst(21);
    dobj.InsetFirst(11);

    return 0;
}