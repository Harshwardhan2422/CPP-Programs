#include<iostream>
using namespace std;

void AdditionD(double iNo1, double iNo2)
{
    double iAns = 0;
    iAns = iNo1 + iNo2;
    cout<<"Addition is : "<<iAns<<"\n";
}

int main()
{
    double iValue1 = 0.0, iValue2 = 0.0;
    
    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;
    
    AdditionD(iValue1, iValue2);

    return 0;
}