#include<iostream>
using namespace std;

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : \n";
    cin>>iValue;
    
    DisplayFrequency(iValue);

    return 0;
}