#include<iostream>
#include<stdbool.h>
using namespace std;

int main()
{
    int iNo = 0;
    bool bRet = false;
    
    cout<<"Enter Number : \n";
    cin>>iNo;
    
    if(bRet == iNo %5)
    {
        cout<<"Divisible By : 5\n";
    }
    else
    {
        cout<<"Not Divisible By : 5\n";
    }
    
    return 0;
}