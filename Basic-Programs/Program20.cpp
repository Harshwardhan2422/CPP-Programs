#include<iostream>
using namespace std;

void DisplayResult(float fPercentage)
{
    if((fPercentage >= 0.0f) && (fPercentage <= 100.0f))    // Filter 
    {
        if(fPercentage >= 85.0f)
        {
            cout<<"Grade A : Excellent \n";
        }
        else if(fPercentage >= 75.0f)
        {
            cout<<"Grade B : Very Good \n";
        }
        else if(fPercentage >= 60.0f)
        {
            cout<<"Grade C : Good \n";
        }
        else if(fPercentage >= 40.0f)
        {
            cout<<"Grade D : Pass \n";
        }
        else
        {
            cout<<"Fail \n";
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
    
    cout<<"Please Enter Your Percentage : \n";
    cin>>fValue;
    
    DisplayResult(fValue);

    return 0;
}