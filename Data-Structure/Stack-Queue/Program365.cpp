#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    public:
        PNODE head;
        int iCount;
        
        Stack()
        {
            head = NULL;
            iCount = 0;
        }
        
        void Push(int no)        // inserFirst()
        {
            PNODE newn = NULL;
            newn = new NODE();
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
        
        int Pop()        // DeleteFirst()
        {
            int iNo = 0;
            PNODE temp = NULL;
            
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
        
        void Display()
        {
            PNODE temp = head;
            
            while(temp != NULL)
            {
                cout<<"|"<<temp -> data<<"|\n";
                temp = temp -> next;
            }
            
        }
        
        int Count()
        {
            return iCount;
        }
};

int main()
{
    Stack sobj;
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