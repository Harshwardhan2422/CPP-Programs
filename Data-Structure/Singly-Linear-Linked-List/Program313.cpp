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

class SinglyLL 
{
    public:
        PNODE head;
        
        SinglyLL()
        {
            head = NULL;
        }
        
        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            
            newn = new NODE;
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
        }
        
        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            
            while(temp != NULL)
            {
                cout<<"|"<<temp -> data<<"|->";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }
        int Count()
        {
            int iCount = 0;
            PNODE temp = NULL;
            temp = head;
            
            while(temp != NULL)
            {
                iCount++;
                temp = temp -> next;
            }
            return iCount;
        }
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            
            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;
            
            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;
                
                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp -> next = newn;
            }
        }
        void DeleteFirst()
        {
            PNODE temp = NULL;
            
            if(head == NULL)
            {
                return;
            }
            else if(head -> next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;
                head = head -> next;
                delete temp;
            }
        }
        void DeleteLast()
        {
            PNODE temp = NULL;
            
            if(head == NULL)
            {
                return;
            }
            else if(head -> next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;
                
                while(temp -> next -> next != NULL)
                {
                    temp = temp -> next;
                }
                delete temp -> next;
                temp -> next = NULL;
            }
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
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(151);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.DeleteFirst();
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.DeleteLast();
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}
