#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    cout<<"Factors of "<<iNo<<" Are :\n";
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
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