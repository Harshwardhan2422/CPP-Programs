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

void Display(PNODE head)
{
    while(head != NULL)
    {
        cout<<"|"<<head -> data<<"|->";
        head = head -> next;
    }
    cout<<"NULL\n";
    
}

int Count(PNODE head)
{
    int iCount = 0;
    
    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    
    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        delete *head;
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = (*head) -> next;
        delete temp;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    
    InsertLast(&first, 101);
    InsertLast(&first, 111);
    
    Display(first);
    iRet = Count(first);
    cout<<"Number Of Element : "<<iRet<<"\n\n";
    
    DeleteFirst(&first);
    
    Display(first);
    iRet = Count(first);
    cout<<"Number Of Element : "<<iRet<<"\n\n";
    
    return 0;
}