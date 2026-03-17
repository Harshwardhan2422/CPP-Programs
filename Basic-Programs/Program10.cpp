#include<iostream>
using namespace std;

float AdditionFloat(float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    
    // Updator
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;
    }
    
    if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
    }
    
    fAdd = fValue1+ fValue2;
    return fAdd;
}

int AdditionInt(int ivalue1,int ivalue2)
{
    int iAdd = 0;
    
    // Updator 
    if(ivalue1 < 0)
    {
        ivalue1 = - ivalue1;
    }
    if(ivalue2 < 0)
    {
        ivalue2 = - ivalue2;
    }
    
    iAdd = ivalue1 + ivalue2;
    return iAdd;
}

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    
    cout<<"Enter First Number : \n";
    cin>>fNo1;
    cout<<"Enter Second Number : \n";
    cin>>fNo2;
    
    cout<<"\n×=×=×=×=×=×=×=×=×=\n\n";
    
    cout<<"Enter First Number : \n";
    cin>>iNo1;
    cout<<"Enter Second Number : \n";
    cin>>iNo2;
    
    fAns = AdditionFloat(fNo1, fNo2);        // Function call 
    cout<<"Addition of Float is : "<<fAns<<"\n";
    
    iAns = AdditionInt(iNo1, iNo2);        // Function call
    cout<<"Addition of Integers is : "<<iAns<<"\n";
    
    return 0;
}