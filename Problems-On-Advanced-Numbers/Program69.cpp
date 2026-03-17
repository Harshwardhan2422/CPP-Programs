#include<iostream>
using namespace std;

int DisplayResult(int *ptr, int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + *ptr;
        *ptr++;
    }
    return iSum;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    
    cout<<"Enter How many Elements : \n";
    cin>>iSize;
    
    int Arr[iSize];
    
    cout<<"Values from Array Are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    iRet = DisplayResult(Arr,iSize);
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}