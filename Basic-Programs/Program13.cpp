#include<iostream>
using namespace std;

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    
    if(fRadius < 0.0f)        // Filter 
    {
        fRadius = - fRadius;
    }
    
    fArea = 3.14 * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue = 0.0f, fResult = 0.0f;
    
    cout<<"Enter Radius of Circle : \n";
    cin>>fValue;
    
    fResult = CircleArea(fValue);
    cout<<"Area of circle is : "<<fResult<<"\n";
    
    return 0;
}