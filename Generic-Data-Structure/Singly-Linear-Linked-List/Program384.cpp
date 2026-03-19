#include<iostream>
using namespace std;

template<class T>

T Addition(T iNo1, T iNo2)
{
    T iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;
    
    double iValue1 = 0.0, iValue2 = 0.0;
    
    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;
    
    iRet = Addition<int>((int)iValue1,(int)iValue2);
    cout<<"Addition of Integer : "<<iRet<<"\n";
    
    fRet = Addition<float>((float)iValue1, (float)iValue2);
    cout<<"Addition of float : "<<fRet<<"\n";
    
    dRet = Addition<double>((double)iValue1, (double)iValue2);
    cout<<"Addition of double : "<<dRet<<"\n";

    return 0;
}