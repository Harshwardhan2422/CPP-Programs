#include<iostream>
using namespace std;

int main()
{
    int iNo = 0, iCnt = 0;
    
    cout<<"Enter Number : \n";
    cin>>iNo;
    
    cout<<"Factors Of "<<iNo<<" Are :\n";
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
    
    return 0;
}