#include<iostream>
using namespace std;

void PatternPrinter()
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
    
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
    
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
    
}

int main()
{
    PatternPrinter();

    return 0;
}