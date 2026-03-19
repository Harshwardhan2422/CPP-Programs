#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node <T>*next;
};

template<class T>
class queue 
{
    public:
        struct node<T>* head;
        int iCount;
        
        queue();
        
        void enqueue(T no);        
        
        T dequeue();        
        
        void Display();
        
        int Count();
};

template<class T>
queue <T>:: queue()
{
    head = NULL;
    iCount = 0;
}
        
template<class T>        
void queue <T>:: enqueue(T no)        
{
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;
    newn = new node<T>();
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

template<class T>
T queue <T>:: dequeue()        
{
    T iNo = {};
    struct node<T>* temp = NULL;
            
    if(head == NULL)
    {
        cout<<"queue is Empty \n";
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
void queue <T>:: Display()
{
    struct node<T>* temp = head;
            
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|\n";
        temp = temp -> next;
    }
} 
       
template<class T>
int queue <T> :: Count()
{
    return iCount;
}        
        
int main()
{
    queue <float> obj;
    int iRet = 0;
    float fRet = 0.0f;
    
    obj.enqueue(101.2f);
    obj.enqueue(51.45f);
    obj.enqueue(21.9f);
    obj.enqueue(11.3f);
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    fRet = obj.dequeue();
    cout<<"Remove Element is : "<<fRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    fRet = obj.dequeue();
    cout<<"Remove Element is : "<<fRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    fRet = obj.dequeue();
    cout<<"Remove Element is : "<<fRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    fRet = obj.dequeue();
    cout<<"Remove Element is : "<<fRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}