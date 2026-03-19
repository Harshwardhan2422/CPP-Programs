#include<iostream>
using namespace std;

double Addition(int *ptr, int iSize)
{
    double iSum = 0;
    
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    double dRet = 0.0;
    
    dRet = Addition(Arr, 5);
    cout<<"Addition of Array is : "<<dRet<<"\n";
    
    return 0;
}