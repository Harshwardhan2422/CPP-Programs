#include<iostream>
using namespace std;

void DisplayResult(float fPercentage)
{
    if((fPercentage >= 0.0f) && (fPercentage <= 100.0f))        // Filter 
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
    else
    {
        cout<<"Invalid Percentage. Please Enter the Value in Range 0 To 100 \n";
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