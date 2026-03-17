#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo == 0)        // Filter 
    {
        cout<<"0 Has Infinity Factors!\n";
        return;
    }
    
    if(iNo <= 0)
    {
        iNo = -iNo;        // Updator 
    }
    
    cout<<"Factors Of "<<iNo<<" Are :\n";
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
    cout<<iNo<<"\n";        // print Input itself 
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : \n";
    cin>>iValue;
    
    DisplayFactors(iValue);
    
    return 0;
}