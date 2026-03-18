#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;
        
            SinglyCL()
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
                
                if((head == NULL) && (tail == NULL))
                {
                    head = newn;
                    tail = newn;
                }
                else
                {
                    newn -> next = head;
                    head = newn;
                }
                (tail) -> next = head;
                iCount++;
            }
            
            void InsertLast(int no)
            {
                PNODE newn = NULL;
                newn = new NODE;
                newn -> data = no;
                newn -> next = NULL;
                
                if((head == NULL) && (tail == NULL))
                {
                    head = newn;
                    tail = newn;
                }
                else 
                {
                    (tail) -> next = newn;
                    tail = newn;
                }
                (tail) -> next = head;
                iCount++;
            }
            
            void DeleteFirst()
            {
                PNODE temp = NULL;
                
                if((head == NULL) && (tail == NULL))
                {
                    return;
                }
                else if(head == tail)
                {
                    delete head;
                    head = NULL;
                    tail = NULL;
                }
                else
                {
                    temp = head;
                    head = head -> next;
                    delete temp;
                }
                tail -> next = head;
                iCount--;
            }
            
            void DeleteLast()
            {
                PNODE temp = NULL;
                
                if((head == NULL) && (tail == NULL))
                {
                    return;
                }
                else if(head == tail)
                {
                    delete head;
                    head = NULL;
                    tail = NULL;
                }
                else
                {
                    temp = head;
                    
                    while(temp -> next != tail)
                    {
                        temp = temp -> next;
                    }
                    delete tail;
                    tail = temp;
                }
                tail -> next = head;
                iCount--;
            }
            
            void InsertAtPos(int no, int ipos)
            {
                int Countnode = 0, i = 0;
                PNODE temp = NULL;
                PNODE newn = NULL;
                newn = new NODE;
                newn -> data = no;
                newn -> next = NULL;
                
                Countnode = Count();
                
                if((ipos < 1) || (ipos > Countnode + 1))
                {
                    cout<<"Invalid Position \n";
                    return;
                }
                if(ipos == 1)
                {
                    InsertFirst(no);
                }
                else if(ipos == Countnode + 1)
                {
                    InsertLast(no);
                }
                else
                {
                    temp = head;
                    
                    for(i = 1; i < ipos - 1; i++)
                    {
                        temp = temp -> next;
                    }
                    newn -> next = temp -> next;
                    temp -> next = newn;
                    iCount++;
                }
            }
            
            void DeleteAtPos(int ipos)
            {
                int Countnode = 0, i = 0;
                PNODE temp = NULL;
                PNODE target = NULL;
                
                Countnode = Count();
                
                if((ipos < 1) || (ipos > Countnode))
                {
                    cout<<"Invalid Position \n";
                    return;
                }
                if(ipos == 1)
                {
                    DeleteFirst();
                }
                else if(ipos == Countnode)
                {
                    DeleteLast();
                }
                else
                {
                    temp = head;
                    
                    for(i = 1; i < ipos - 1; i++)
                    {
                        temp = temp -> next;
                    }
                    target = temp -> next;
                    temp -> next = target -> next;
                    delete target;
                    iCount--;
                }   
            }
            
            void Display()
            {
                if((head == NULL) && (tail == NULL))
                {
                    cout<<"Linklist is Empty \n";
                    return;
                }
                
                cout<<"Elements of Linklist Are : \n";
                PNODE temp = head;
                do
                {
                    cout<<"|"<<temp -> data<<"| ";
                    temp = temp -> next;
                }while(temp != tail -> next);
                cout<<"\n";
            }
            
            int Count()
            {
                return iCount;
            }
};

int main()
{
    SinglyCL sobj;
    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(151);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.InsertAtPos(75,4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.DeleteAtPos(4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}