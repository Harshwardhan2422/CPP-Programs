//. Input: 5
// * * * * * 
#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"*\t";
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