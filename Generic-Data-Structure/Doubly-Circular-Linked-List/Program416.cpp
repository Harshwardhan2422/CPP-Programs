#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node <T>*next;
    struct node <T>*prev;
};

template<class T>
class DoublyCL
{
    public:
        struct node<T>* head;
        struct node<T>* tail;
        int iCount;
        
        DoublyCL();
        
        void InsertFirst(T no);
        
        void InsertLast(T no);
        
        void DeleteFirst();
        
        void DeleteLast();
        
        void InsertAtPos(T no, int ipos);
        
        void DeleteAtPos(int ipos);

        void Display();
        
        int Count();
        
};

template<class T>
DoublyCL <T> :: DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}
        
template<class T>
void DoublyCL <T> :: InsertFirst(T no)
{
    struct node<T>* newn = NULL;
    newn = new node<T>;
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
            
    if((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn -> next = head;
        head -> prev = newn;
        head = newn;
    }
    tail -> next = head;
    head -> prev = tail;
    iCount++;
}        

template<class T>        
void DoublyCL <T> :: InsertLast(T no)
{
    struct node<T>* newn = NULL;
    newn = new node<T>;
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
            
    if((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    
    else
    {
        tail -> next = newn;
        newn -> prev = tail;
        tail = newn;
    }
    tail -> next = head;
    head -> prev = tail;
    iCount++;
}

template<class T>                    
void DoublyCL <T> :: DeleteFirst()
{
    if((head == NULL) && (tail == NULL))
    {
        return;
    }
            
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        iCount--;
    }
            
    else
    {
        head = head -> next;
        delete head -> prev;
        tail -> next = head;
        head -> prev = tail;
        iCount--;
    }
}        

template<class T>           
void DoublyCL <T> :: DeleteLast()
{
    if((head == NULL) && (tail == NULL))
    {
        return;
    }
            
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        iCount--;
    }
            
    else
    {
        tail = tail -> prev;
        delete tail -> next;
        tail -> next = head;
        head -> prev = tail;
        iCount--;
    }
}        

template<class T>          
void DoublyCL <T> :: InsertAtPos(T no, int ipos)
{
    int Countnode = 0, i = 0;
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;
            
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
        newn = new node<T>;
        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;
                
        temp = head;
                
        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        iCount++;
    }
}        

template<class T>          
void DoublyCL <T> :: DeleteAtPos(int ipos)
{
    int Countnode = 0, i = 0;
    struct node<T>* temp = NULL;
    struct node<T>* target = NULL;
            
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
        target -> next -> prev = temp;
        delete target;
        iCount--;
    }
}        

template<class T>          
void DoublyCL <T> :: Display()
{
    if((head == NULL) && (tail == NULL))
    {
        cout<<"Linklist is Empty \n";
        return;
    }
            
    struct node<T>* temp = NULL;
    temp = head;
    cout<<"Elements of Linklist Are : \n";
            
    do
    {
        cout<<"|"<<temp -> data<<"|<=>";
        temp = temp -> next;
    }while(temp != head);
    cout<<"(head)\n";
}        
 
template<class T>               
int DoublyCL <T> :: Count()
{
    return iCount;
}        
        
int main()
{
    DoublyCL <float> dobj;
    int iRet = 0;
    
    dobj.InsertFirst(51.2f);
    dobj.InsertFirst(21.6f);
    dobj.InsertFirst(11.1f);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.InsertLast(101.9f);
    dobj.InsertLast(111.5f);
    dobj.InsertLast(121.3f);
    
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
    
    dobj.InsertAtPos(75.0f, 4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    dobj.DeleteAtPos(4);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}