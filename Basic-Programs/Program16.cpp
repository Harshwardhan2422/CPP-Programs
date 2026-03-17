#include<iostream>
using namespace std;

void DisplayResult(float fPercentage)
{
    if(fPercentage >= 40)
    {
        cout<<"You Are Pass \n";
    }
    else
    {
        cout<<"You Are Fail \n";
    }
}

int main()
{
    float fValue = 0.0f;
    
    cout<<"Enter Your Percentage : \n";
    cin>>fValue;
    
    DisplayResult(fValue);
    
    return 0;
}