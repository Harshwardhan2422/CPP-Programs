#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Frequency : \n";
    cin>>iValue;
    
    Display(iValue);

    return 0;
}