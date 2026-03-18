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

void Demo1(node *head)        // Call By Value 
{

}
void Demo2(node **head)        // Call By Address 
{

}

int main()
{
    node *first = NULL;
    
    return 0;
};