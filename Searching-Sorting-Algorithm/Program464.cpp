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
                PNODE newn = NULL;
                newn = new node();
                newn -> data = no;
                newn -> next = NULL;
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
};

int main()
{
    SinglyLL sobj;
    
    int ivalue = 0, ipos = 0, ioption = 0;
    
    while(1)
    {
        cout<<"-----------------------------------\n";
        cout<<"Please Select Targeted Option \n";
        cout<<"-----------------------------------\n";
        
        cout<<"1 : Insert New Element At First Position\n";
        
        cout<<"2 : Insert New Element At Last Position\n";
        
        cout<<"3 : Insert New Element At Given Position\n";
        
        cout<<"4 : Delete Element From First Position \n";
        
        cout<<"5 : Delete Element From Last Position \n";
        
        cout<<"6 : Delete Element From Given Position \n";
        
        cout<<"7 : Display The Elements \n";
        
        cout<<"8 : Count Elements \n";
        
        cout<<"9 : Exit \n\n";
        
        cin>>ioption;
    
    
        if(ioption == 1)
        {
            cout<<"Enter The Element : \n";
            cin>>ivalue;
        
            sobj.InsertFirst(ivalue);
        
            cout<<"Element Inserted Successfully \n";
        }
    
        else if(ioption == 2)
        {
            cout<<"Enter The Element : \n";
            cin>>ivalue;
        
            sobj.InsertLast(ivalue);
        
            cout<<"Element Inserted Successfully \n";
        }
    
        else if(ioption == 3)
        {
            cout<<"Enter The Element : \n";
            cin>>ivalue;
            cout<<"Enter The Position : \n";
            cin>>ipos;
        
            sobj.InsertAtPos(ivalue,ipos);
        
            cout<<"Element Inserted Successfully \n";
        }
    
        else if(ioption == 4)
        {
            sobj.DeleteFirst();
            cout<<"Element Deleted Successfully \n";
        }
    
        else if(ioption == 5)
        {
            sobj.DeleteLast();
            cout<<"Element Deleted Successfully \n";
        }
    
        else if(ioption == 6)
        {
            cout<<"Enter The Position : \n";
            cin>>ipos;
        
            sobj.DeleteAtPos(ipos);
        
            cout<<"Element Deleted Successfully \n";
        }
    
        else if(ioption == 7)
        {
            cout<<"Element Of Linklist Are : \n";
        
            sobj.Display();
        }
    
        else if(ioption == 8)
        {
            cout<<"Total Number Of Elements Are : "<<sobj.Count()<<"\n";
        }
        
        else if(ioption == 9)
        {
            cout<<"Thank You For Using LinkList \n";
            break;
        }
        
        else
        {
            cout<<"Invalid Option \n";
        }
    }
    return 0;
}