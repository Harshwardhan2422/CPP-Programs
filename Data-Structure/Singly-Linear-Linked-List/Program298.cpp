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

int main()
{
    node *first = NULL;
    
    node obj1;
    node obj2;
    node obj3;
    node obj4;
    
    obj1.data = 10;
    obj2.data = 20;
    obj3.data = 30;
    obj4.data = 40;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = &obj4;
    obj4.next = NULL;
    
    first = &obj1;
    
    cout<<first -> data<<"\t";
    cout<<first -> next -> data<<"\t";
    cout<<first -> next ->next -> data<<"\t";
    cout<<first -> next -> next -> next -> data<<"\t";
    
    return 0;
}