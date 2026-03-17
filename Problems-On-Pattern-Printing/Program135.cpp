#include<iostream>
using namespace std;

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt * 2<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    DisplayFrequency(iValue);

    return 0;
}