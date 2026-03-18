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
                tail -> next = newn;
                newn -> prev = tail;
                tail = newn;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount++;
        }
        
        void DeleteFirst()
        {
            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            
            else if(head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
                iCount--;
            }
            
            else
            {
                head = head -> next;
                delete head -> prev;
                tail -> next = head;
                head -> prev = tail;
                iCount--;
            }
        }
        
        void DeleteLast()
        {
            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            
            else if(head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
                iCount--;
            }
            
            else
            {
                tail = tail -> prev;
                delete tail -> next;
                tail -> next = head;
                head -> prev = tail;
                iCount--;
            }
        }
        
        void InsertAtPos(int no, int ipos)
        {
        
        }
        
        void DeleteAtPos(int ipos)
        {
        
        }
        
        void Display()
        {
            if((head == NULL) && (tail == NULL))
            {
                cout<<"Linklist is Empty \n";
                return;
            }
            
            PNODE temp = NULL;
            temp = head;
            cout<<"Elements of Linklist Are : \n";
            
            do
            {
                cout<<"|"<<temp -> data<<"|<=>";
                temp = temp -> next;
            }while(temp != head);
            cout<<"(head)\n";
        }
        
        int Count()
        {
            return iCount;
        }
};

int main()
{
    DoublyCL dobj;
    int iRet = 0;
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.DeleteFirst();
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.DeleteLast();
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}