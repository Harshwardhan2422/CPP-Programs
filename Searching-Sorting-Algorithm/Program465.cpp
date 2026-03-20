#include<iostream>
using namespace std;

struct node
{
    public:
        int data;
        struct node *next;
};

typedef node NODE;
typedef node* PNODE;

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
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new node();
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
            iCount++;
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
            iCount--;
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
            iCount--;
        }
        
        void InsertAtPos(int no, int ipos)
        {
            int i = 0;
            PNODE temp = NULL;
            PNODE newn = NULL;
            newn = new node();
            newn -> data = no;
            newn -> next = NULL;
            
            if((ipos < 1) || (ipos > iCount + 1))
            {
                cout<<"Invalid Position \n";
                return;
            }
            if(ipos == 1)
            {
                InsertFirst(no);
            }
            else if(ipos == iCount + 1)
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
            int i = 0;
            PNODE temp = NULL;
            PNODE target = NULL;
            
            if((ipos < 1) || (ipos > iCount))
            {
                cout<<"Invalid Position \n";
                return;
            }
            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == iCount)
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
        
        void MiddleElement()
        {
            PNODE temp = head;
            int iCount = 0, imid = 0;
            
            if(head == NULL)
            {
                cout<<"Linklist is empty\n";
                return;
            }
            
            while(temp != NULL)
            {
                iCount++;
                temp = temp -> next;
            }
            
            imid = (iCount / 2) + 1;
            
            temp = head;
            
            for(int i = 1; i < imid; i++)
            {
                temp = temp -> next;
            } 
            
            cout<<"Middle Element is : "<<temp -> data<<"\n";
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
    sobj.MiddleElement();
    
    
    return 0;
}