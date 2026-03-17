#include<iostream>
#include<stdbool.h>
using namespace std;

int main()
{
    int iNo = 25;
    bool bRet = false;
    
    if(bRet = iNo % 5 == 0)
    {
        cout<<"Divisible By : "<<iNo<<"\n";
    }
    else
    {
        cout<<"Not Divisible By : "<<iNo<<"\n";
    }
    
    return 0;
}