#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckDivisible(int iNo)
{
    // No Need For Loop
    return(iNo % 5 == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    
    cout<<"Enter Number : \n";
    cin>>iValue;
    
    bRet = CheckDivisible(iValue);
    
    if(bRet == true)
    {
        cout<<"Divisible By 5 \n";
    }
    else
    {
        cout<<"Not Divisible By 5 \n";
    }
    
    return 0;
}