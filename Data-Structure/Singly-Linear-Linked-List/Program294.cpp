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
    node obj;
    node *ptr = &obj;
    
    obj.data = 10;
    ptr -> data = 10;
    
    cout<<"Value Of data : "<<obj.data<<"\n";
    cout<<"Value Of next : "<<ptr -> data<<"\n";
    
    return 0;
}