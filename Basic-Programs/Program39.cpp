#include<iostream>
using namespace std;

int main()
{
    int iCnt = 0, iFrequency = 0;
    
    cout<<"Enter The Frequency : \n";
    cin>>iFrequency;
    
    for(iCnt = iFrequency; iCnt >=1; iCnt--)
    {
        cout<<"\n"<<iCnt<<"\n";
    }
    
    return 0;
}