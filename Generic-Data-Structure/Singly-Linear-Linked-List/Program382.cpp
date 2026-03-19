#include<iostream>
using namespace std;

void Additionf(float iNo1, float iNo2)
{
    float iAns = 0;
    iAns = iNo1 + iNo2;
    cout<<"Addition is : "<<iAns<<"\n";
}

int main()
{
    float iValue1 = 0.0f, iValue2 = 0.0f;
    
    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;
    
    Additionf(iValue1, iValue2);

    return 0;
}