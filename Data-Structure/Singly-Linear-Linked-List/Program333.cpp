#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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
        
        }
        
        void InsertLast(int no)
        {
        
        }
        
        void Display()
        {
        
        }
        
        int Count()
        {
            return iCount;
        }
        
        void DeleteFirst()
        {
        
        }
        
        void DeleteLast()
        {
        
        }
        
        void InsertAtPos(int no, int ipos)
        {
        
        }
        
        void DeleteAtPos(int ipos)
        {
        
        }
};

int main()
{
    SinglyLL sobj;


    return 0;
}