#include<iostream>
using namespace std;

int main()
{
    char Name[30];
    char *ptr = Name;
    
    cout<<"Enter Your Name : \n";
    cin.get(Name,30);
    
    cout<<*ptr<<"\n";
    ptr++;
    
    cout<<*ptr<<"\n";
    ptr++;
    
    cout<<*ptr<<"\n";
    ptr++;
    
    cout<<*ptr<<"\n";
    ptr++;
    
    cout<<*ptr<<"\n";
    ptr++;
     
    return 0;
}