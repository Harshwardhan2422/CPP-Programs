#include<iostream>
using namespace std;

struct node
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

class SinglyLL 
{
    public:
         struct node* head;
        
        SinglyLL();

        void InsertFirst(int no);
        
        void InsertLast(int no);
        
        void DeleteFirst();
        
        void DeleteLast();
        
        void InsertAtPos(int no, int ipos);
        
        void DeleteAtPos(int ipos);
        
        void Display();

        int Count();
        
};

SinglyLL :: SinglyLL()
{
    head = NULL;
}

void SinglyLL :: InsertFirst(int no)
{
    struct node* newn = NULL;
            
    newn = new node;
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

void SinglyLL :: InsertLast(int no)  
{  
    struct node* newn = NULL;  
    struct node* temp = NULL;  
          
    newn = new node;  
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
    
void SinglyLL :: InsertAtPos(int no, int ipos)
{
    struct node* temp = NULL;
    struct node* newn = NULL;
            
    int i = 0;
    int iCount = Count();
            
    newn = new node;
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
    }
}   

void SinglyLL :: DeleteFirst()
{
    struct node* temp = NULL;
            
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
        
void SinglyLL :: DeleteLast()
{
    struct node* temp = NULL;
            
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
        
void SinglyLL :: DeleteAtPos(int ipos)
{
    struct node* temp = NULL;
    struct node* target = NULL;
            
    int i = 0;
    int iCount = Count();
            
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
    }
}    
            
void SinglyLL :: Display()
{
    struct node* temp = NULL;
    temp = head;
            
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|->";
        temp = temp -> next;
    }
    cout<<"NULL\n";
 }              
        
        
int SinglyLL :: Count()
{
    int iCount = 0;
    struct node* temp = NULL;
    temp = head;
            
    while(temp != NULL)
    {
        iCount++;
        temp = temp -> next;
    }
    return iCount;
}               
          
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
    
    sobj.InsertAtPos(75, 4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.DeleteAtPos(4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}