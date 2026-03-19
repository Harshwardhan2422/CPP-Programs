#include<iostream>
using namespace std;

template<class T>
struct node
{
    public:
        T data;
        node<T>*next;
};

template<class T>
class SinglyLL 
{
    public:
         struct node<T>* head;
        
        SinglyLL();

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
SinglyLL<T>:: SinglyLL()
{
    head = NULL;
}

template<class T>
void SinglyLL<T>:: InsertFirst(T no)
{
    struct node <T>* newn = NULL;
            
    newn = new node<T>;
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

template<class T>
void SinglyLL<T>:: InsertLast(T no)  
{  
    struct node<T>* newn = NULL;  
    struct node<T>* temp = NULL;  
          
    newn = new node<T>;  
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
    
template<class T>
void SinglyLL<T> :: InsertAtPos(T no, int ipos)
{
    struct node<T>* temp = NULL;
    struct node<T>* newn = NULL;
            
    int i = 0;
    int iCount = Count();
            
    newn = new node<T>;
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

template<class T>
void SinglyLL<T>:: DeleteFirst()
{
    struct node<T> *temp = NULL;
            
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

template<class T>
void SinglyLL<T>:: DeleteLast()
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
void SinglyLL<T>:: DeleteAtPos(int ipos)
{
    struct node<T>* temp = NULL;
    struct node<T>* target = NULL;
            
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

template<class T>            
void SinglyLL<T>:: Display()
{
    struct node<T>* temp = NULL;
    temp = head;
            
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|->";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}              

template<class T>           
int SinglyLL<T>:: Count()
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
    SinglyLL <char> sobj;
    int iRet = 0;
    
    sobj.InsertFirst('R');
    sobj.InsertFirst('A');
    sobj.InsertFirst('H');
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.InsertLast('S');
    sobj.InsertLast('H');
    sobj.InsertLast('A');
    
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
    
    sobj.InsertAtPos('M', 4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    sobj.DeleteAtPos(4);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";
    
    return 0;
}