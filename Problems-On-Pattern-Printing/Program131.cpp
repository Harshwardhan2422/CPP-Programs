#include<iostream>
using namespace std;

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt >= -iNo; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : \n";
    cin>>iValue;
    
    DisplayFrequency(iValue);

    return 0;
}