#include<iostream>
using namespace std;

float Addition(int *ptr, int iSize)
{
    float iSum = 0;
    
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float fRet = 0.0f;
    
    fRet = Addition(Arr, 5);
    cout<<"Addition of Array is : "<<fRet<<"\n";
    
    return 0;
}