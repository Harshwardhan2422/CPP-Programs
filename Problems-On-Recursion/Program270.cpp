#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    int iCnt = 1;
    
    while(iCnt <= iNo)
    {
        cout<<"*\n";
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    DisplayI(iValue);
    cout<<"End Of Main \n";

    return 0;
}