#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int ilength = 0;
    
    cout<<"Enter Number of Element : \n";
    cin>>ilength;
    
    ptr = new int[ilength];
    
    // Logic
    
    delete [] ptr;
    
    return 0;
}