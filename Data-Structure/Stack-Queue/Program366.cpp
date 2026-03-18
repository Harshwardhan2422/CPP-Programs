#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class queue 
{
    public:
        PNODE head;
        int iCount;
        
        queue()
        {
            head = NULL;
            iCount = 0;
        }
        
        void enqueue(int no)        // inserLast()
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new NODE();
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
        
        int dequeue()        // DeleteFirst()
        {
            int iNo = 0;
            PNODE temp = NULL;
            
            if(head == NULL)
            {
                cout<<"queue is Empty \n";
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
    queue obj;
    int iRet = 0;
    
    obj.enqueue(101);
    obj.enqueue(51);
    obj.enqueue(21);
    obj.enqueue(11);
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = obj.dequeue();
    cout<<"Remove Element is : "<<iRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = obj.dequeue();
    cout<<"Remove Element is : "<<iRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = obj.dequeue();
    cout<<"Remove Element is : "<<iRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    iRet = obj.dequeue();
    cout<<"Remove Element is : "<<iRet<<"\n\n";
    obj.Display();
    iRet = obj.Count();
    cout<<"Number Of Elements Are : "<<iRet<<"\n";
    
    return 0;
}