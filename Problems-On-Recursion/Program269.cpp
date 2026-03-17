#include<iostream>
using namespace std;

void DisplayR(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt <= iNo)
    {
        cout<<"*\n";
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    DisplayR(iValue);

    return 0;
}