#include<iostream>
using namespace std;

template<class T>
struct node
{
    public:
        T data;
        node <T>*next;
        node <T>*prev;
};

template<class T>
class DoublyLL
{
    public:
    
        struct node<T>* head;
        
        DoublyLL();
        
        void InsertFirst(T no);
        
        void InsertLast(T no);
        
        void Display();
        
        int Count();
        
        void DeleteFirst();
        
        void DeleteLast();
        
        void InsertAtPos(T no, int ipos);
        
        void DeleteAtPos(int ipos);
};

template<class T>
DoublyLL <T> :: DoublyLL()
{
    head = NULL;
}

template<class T>        
void DoublyLL <T> :: InsertFirst(T no)
{
    struct node<T>* newn = NULL;
    newn = new node<T>();
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

template<class T>           
void DoublyLL <T> :: InsertLast(T no)
{
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;
    newn = new node<T>();
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

template<class T>   
void DoublyLL <T> :: DeleteFirst()
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
 
template<class T>   
void DoublyLL <T> :: DeleteLast()
{
    struct node<T>* temp = NULL;
            
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

template<class T>   
void DoublyLL <T> :: InsertAtPos(T no, int ipos)
{
    int Countnode = 0, i = 0;
    Countnode = Count();
            
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;
            
    newn = new node<T>();
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

template<class T>   
void DoublyLL <T> :: DeleteAtPos(int ipos)
{
    int Countnode = 0, i = 0;
    Countnode = Count();
            
    struct node<T>* temp = NULL;
    struct node<T>* target = NULL;
            
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
   
template<class T>   
void DoublyLL <T> :: Display()
{
    struct node<T>* temp = NULL;
    temp = head;
            
    cout<<"NULL";
    while(temp != NULL)
    {
        cout<<"<=>|"<<temp -> data<<"|";
        temp = temp -> next;
    }
    cout<<"<=>NULL\n";
}

template<class T>   
int DoublyLL <T> :: Count()
{
    int iCount = 0;
    struct node<T>* temp = NULL;
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
    DoublyLL <double> dobj;
    int iRet = 0;
    
    dobj.InsertFirst(51.26);
    dobj.InsertFirst(21.3);
    dobj.InsertFirst(11.94);
    
    dobj.InsertLast(101.19);
    dobj.InsertLast(111.312);
    dobj.InsertLast(151.543);
    
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
    
    dobj.InsertAtPos(75.980, 4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.DeleteAtPos(4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}