#include<iostream>
using namespace std;

int Addition(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }    
    return iSum;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    cout<<"Enter Number Of Element :\n";
    cin>>ilength;
    
    ptr = new int[ilength];
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    
    iRet = Addition(ptr, ilength);
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}