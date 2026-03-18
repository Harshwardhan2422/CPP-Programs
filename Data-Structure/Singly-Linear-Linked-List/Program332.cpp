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
        
        SinglyLL()
        {
            head = NULL;
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
            return 0;
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