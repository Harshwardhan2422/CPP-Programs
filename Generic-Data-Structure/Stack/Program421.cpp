#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node <T>*next;
};

template<class T>
class Stack
{
    public:
        struct node <T>* head;
        int iCount;
        
        Stack();
        
        void Push(T no);        
        
        int Pop();       
        
        void Display();
        
        int Count();
        
};

template<class T>
Stack <T>:: Stack()
{
    head = NULL;
    iCount = 0;
}

template<class T>        
void Stack <T>:: Push(T no)        
{
    struct node<T>* newn = NULL;
    newn = new node<T>();
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

template<class T>
int Stack <T>:: Pop()       
{
    int iNo = 0;
    struct node<T>* temp = NULL;
            
    if(head == NULL)
    {
        cout<<"Stack is Empty \n";
        return -1;
    }
            
    else if(head -> next == NULL)
    {
        iNo = head -> data;
        delete head;
        head = NULL;
        iCount--;
    }
            
    else
    {
        iNo = head -> data;
        temp = head;
        head = head -> next;
        delete temp;
        iCount--;
    }
    return iNo;
}

template<class T>
void Stack <T>:: Display()
{
    struct node<T>* temp = head;
            
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|\n";
        temp = temp -> next;
    }
}        

template<class T>
int Stack <T>:: Count()
{
    return iCount;
}        
        
int main()
{
    Stack <int> sobj;
    int iRet = 0;
    
    sobj.Push(101);
    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = sobj.Pop();
    cout<<"Pop Element is : "<<iRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = sobj.Pop();
    cout<<"Pop Element is : "<<iRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = sobj.Pop();
    cout<<"Pop Element is : "<<iRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = sobj.Pop();
    cout<<"Pop Element is : "<<iRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}