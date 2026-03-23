#include<iostream>
using namespace std;

int main()
{
    int *Arr;
    
    Arr = new int[4 * 3];
    
    cout<<"Size Of Array is : "<<sizeof(int) * 4 * 3<<"\n";

    return 0;
}