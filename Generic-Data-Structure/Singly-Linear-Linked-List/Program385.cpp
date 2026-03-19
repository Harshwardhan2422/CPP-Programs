#include<iostream>
using namespace std;

int Addition(int *ptr, int iSize)
{
    int iSum = 0;
    
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iRet = 0;
    
    iRet = Addition(Arr, 5);
    cout<<"Addition of Array is : "<<iRet<<"\n";
    
    return 0;
}