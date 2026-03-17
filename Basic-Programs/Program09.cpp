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

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;
    
    cout<<"Enter First Number : \n";
    cin>>fNo1;
    cout<<"Enter Second Number : \n";
    cin>>fNo2;
    
    fAns = AdditionFloat(fNo1, fNo2);        // Function call 
    cout<<"Addition is : "<<fAns<<"\n";
    
    return 0;
}
