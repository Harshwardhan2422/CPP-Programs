#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        
        node()
        {
            data = 0;
            next = NULL;
        }
};

typedef node NODE;
typedef node* PNODE;
typedef node** PPNODE;

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = new NODE;
    
    newn -> data = no;
    newn -> next = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> next = NULL;
    }
}

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    
    newn = new NODE;
    
    newn -> data = no;
    newn -> next = NULL;
    
    if(*head == NULL)        // Linked List is empty 
    {
        *head = newn;
    }
    else                     // Linked List contains atleast one node
    {
        newn -> next = *head;
        *head = newn;
    }
}

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    
    InsertLast(&first, 101);
    InsertLast(&first, 111);
    
    return 0;
}