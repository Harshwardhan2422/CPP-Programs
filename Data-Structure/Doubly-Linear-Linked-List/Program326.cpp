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
        
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
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
                temp = head;
                
                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp -> next = newn;
                newn -> prev = temp;
            }
        }
        
        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            
            while(temp != NULL)
            {
                cout<<"<=>|"<<temp -> data<<"|";
                temp = temp -> next;
            }
            cout<<"<=>NULL\n";
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
        
        void DeleteFirst()
        {
            // Using Temporary Pointer 
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
                head -> prev = NULL;
                delete temp;
                
            }
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
    DoublyLL dobj;
    int iRet = 0;
    
    dobj.InsetFirst(51);
    dobj.InsetFirst(21);
    dobj.InsetFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(151);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}