#include<iostream>
using namespace std;

int main()
{
    float fValue = 0.0f;
    
    cout<<"Enter Your Percentage : \n";
    cin>>fValue;
    
    if(fValue >= 40.0f)
    {
        cout<<"You Are Pass \n";
    }
    else
    {
        cout<<"You Are Fail \n";
    }
    
    return 0;
}