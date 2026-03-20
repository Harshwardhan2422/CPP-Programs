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
        
        bool LoopCheck()
        {
            PNODE teacher = head;
            PNODE student = head;
            bool bFlag = false;
            
            while((teacher != NULL) && (teacher -> next != NULL))
            {
                student = student -> next;
                teacher = teacher -> next -> next;
                
                if(student == teacher)
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;
        }
};

int main()
{
    SinglyLL sobj;
    bool bRet = 0;
    
    sobj.InsertFirst(151);
    sobj.InsertFirst(111);
    sobj.InsertFirst(101);
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    PNODE temp = sobj.head;
    
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    
    temp -> next = sobj.head -> next -> next;
    
    bRet = sobj.LoopCheck();
    
    if(bRet == true)
    {
        cout<<"Loop Detected \n";
    }
    
    else
    {
        cout<<"Loop Not Detected \n";
    }
    
    return 0;
}