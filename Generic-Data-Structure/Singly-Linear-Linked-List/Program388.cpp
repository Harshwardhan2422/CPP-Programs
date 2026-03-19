#include<iostream>
using namespace std;

template<class T,class R>

R Addition(T *ptr, int iSize)
{
    R iSum = 0;
    
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
    float fRet = 0.0f;
    double dRet = 0.0;
    
    iRet = Addition<int,int>(Arr, 5);
    fRet = Addition<int,float>(Arr, 5);
    dRet = Addition<int,double>(Arr, 5);
    
    cout<<"int Sum is : "<<iRet<<"\n";
    cout<<"float Sum is : "<<fRet<<"\n";
    cout<<"double Sum is : "<<dRet<<"\n";
    
    return 0;
}