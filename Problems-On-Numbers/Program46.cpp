#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckDivisible(int iNo1, int iNo2)
{
    if(iNo2 == 0)        // Filter 
    {
        cout<<"Divisor Cannot be zero!\n";
        return false;
    }
    
    if(iNo1 % iNo2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = 0;
    
    cout<<"Enter Number : \n";
    cin>>iValue1;
    cout<<"Enter Divisor : \n";
    cin>>iValue2;
    
    bRet = CheckDivisible(iValue1,iValue2);
    
    if(bRet == true)
    {
        cout<<iValue1<<" Is Divisible By : "<<iValue2<<"\n";
    }
    else
    {
        cout<<iValue1<<" Is Not Divisible By : "<<iValue2<<"\n";
    }
    
    return 0;
}