#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
    
        node()
        {
            data = 0;
            next = NULL;
        }
};

typedef node NODE;
typedef node* PNODE;
typedef node** PPNODE;

void InsertFirst(PPNODE head, int no)
{

}

void Display(PNODE head)
{

}

int main()
{
    node *first = NULL;
    
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    
    Display(first);
    
    return 0;
};