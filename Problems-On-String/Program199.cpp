#include<iostream>
using namespace std;

int main()
{
    char Arr[30];
    char *ptr = Arr;
    
    cout<<"Enter String : ";
    cin.get(Arr,30);
    
    while(*ptr != '\0')
    {
        cout<<*ptr<<"\n";
        ptr++;
    }
     
    return 0;
}