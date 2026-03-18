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
                cout<<"Elements of Linklist Are : \n";
                
                do
                {
                    cout<<"|"<<head -> data<<"| ";
                    head = head -> next;
                }while(head != tail -> next);
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
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}