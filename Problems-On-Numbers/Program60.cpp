#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    if(iNo == 0)        // Filter For Negative value 
    {
        cout<<"0 Has Infinity Factors!\n";
        return;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;        // Updator 
    }
    
    cout<<"Factors Of "<<iNo<<" Are:\n";
    
    while(iCnt < iNo/2)        // Loop itrate half of time 
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
    }
    cout<<iNo<<"\n";        // Input itself 
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : \n";
    cin>>iValue;
    
    DisplayFactors(iValue);
    
    return 0;
}