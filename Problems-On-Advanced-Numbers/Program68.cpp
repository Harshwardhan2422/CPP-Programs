#include<iostream>
using namespace std;

int Display(int *ptr)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + *ptr;
        *ptr++;
    }
    return iSum;
}

int main()
{
    int Arr[4];
    int iCnt = 0, iRet = 0;
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    iRet = Display(Arr);
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}