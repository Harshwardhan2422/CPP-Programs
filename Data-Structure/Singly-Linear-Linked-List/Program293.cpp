#include<iostream>
using namespace std;
#pragma pack(1)

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
    
    cout<<"Size Of node is : "<<sizeof(obj)<<"\n";
    
    return 0;
}