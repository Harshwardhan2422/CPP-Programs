#include<iostream>
using namespace std;

int main()
{
    int iFrequency = 0, iCnt = 0;
    
    cout<<"Enter The Frequency : \n";
    cin>>iFrequency;
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        cout<<"Hello C++...\n";
    }

    return 0;
}