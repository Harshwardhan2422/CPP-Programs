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
        
        void InsertFirst(int no)
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
            
            cout<<"NULL";
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
                head = head -> next;
                delete head -> prev;
                head -> prev = NULL;
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
            int Countnode = 0, i = 0;
            Countnode = Count();
            
            PNODE newn = NULL;
            PNODE temp = NULL;
            
            newn = new NODE(no);
            newn -> data = no;
            newn -> next = NULL;
            newn -> prev = NULL;
            
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
                temp -> next -> prev = newn;
                temp -> next = newn;
                newn -> prev = temp;
            }
            
        }
        
        void DeleteAtPos(int ipos)
        {
            int Countnode = 0, i = 0;
            Countnode = Count();
            
            PNODE temp = NULL;
            PNODE target = NULL;
            
            if((ipos < 1) || (ipos > Countnode ))
            {
                cout<<"Invalid Position \n";
                return;
            }
            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == Countnode )
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
                temp -> next -> prev = temp;
                delete target;
            }
        }
};

int main()
{
    DoublyLL dobj;
    int iRet = 0;
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(151);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.InsertAtPos(75, 4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.DeleteAtPos(4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}