#include<iostream>
using namespace std;

int Count(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == 'm')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    iRet = Count(Arr);
    cout<<"Number of m : "<<iRet<<"\n";

    return 0;
}