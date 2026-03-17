#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;        // Updator 
    }
    
    cout<<"Factors Of "<<iNo<<" Are:\n";
    while(iCnt < iNo)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : \n";
    cin>>iValue;
    
    DisplayFactors(iValue);
    
    return 0;
}