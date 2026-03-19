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
        
        T Pop();       
        
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
T Stack <T>:: Pop()       
{
    T iNo = {};
    struct node<T>* temp = NULL;
            
    if(head == NULL)
    {
        cout<<"Stack is Empty \n";
        return T();
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
    Stack <double> sobj;
    int iRet = 0;
    double dRet = 0.0;
    
    sobj.Push(101.223);
    sobj.Push(51.52);
    sobj.Push(21.918);
    sobj.Push(11.14);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    dRet = sobj.Pop();
    cout<<"Pop Element is : "<<dRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    dRet = sobj.Pop();
    cout<<"Pop Element is : "<<dRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    dRet = sobj.Pop();
    cout<<"Pop Element is : "<<dRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    dRet = sobj.Pop();
    cout<<"Pop Element is : "<<dRet<<"\n\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}