#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;
        
        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }
        
        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new node();
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
        
        void InsertLast(int no)
        {
        
        }
        
        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            
            cout<<"Element of Linklist Are : \n";
            while(temp != NULL)
            {
                cout<<"|"<<temp -> data<<"|->";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }
        
        int Count()
        {
            return iCount;
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
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";


    return 0;
}