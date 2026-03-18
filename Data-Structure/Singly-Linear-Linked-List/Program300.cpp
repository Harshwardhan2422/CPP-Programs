#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
};

void Demo1(node *head)    // Call By Value 
{

}

void Demo2(node **head)    // Call By Address 
{

}

int main()
{
    node *first = NULL;
    
    node obj1;
    node obj2;
    node obj3;
    
    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;
    
    first = &obj1;
    
    Demo1(first);
    Demo2(&first);

    return 0;
}