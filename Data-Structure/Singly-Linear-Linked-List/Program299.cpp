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
    
    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;
    
    first = &obj1;
    
    cout<<first -> data<<"\t";                     // 11
    cout<<first -> next -> data<<"\t";            // 21
    cout<<first -> next ->next -> data<<"\t";    // 51
    
    return 0;
}
/*

    &first                        50
    first                         100
    first -> next                 200
    first -> next -> next         300   
    

*/