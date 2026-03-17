#include<iostream>
using namespace std;


int main()
{
    int Arr[4];
    int iCnt = 0, iSum = 0;
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    cout<<"Addition is : "<<iSum<<"\n";
    
    return 0;
}