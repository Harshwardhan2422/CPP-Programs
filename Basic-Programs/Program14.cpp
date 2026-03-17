#include<iostream>
#define PI 3.14        // User Define macro 
using namespace std;

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    
    if(fRadius < 0)        // Filter 
    {
        fRadius = - fRadius;
    }
    
    fArea = PI * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue = 0.0f, fResult = 0.0f;
    
    cout<<"Enter Radius of Circle : \n";
    cin>>fValue;
    
    fResult = CircleArea(fValue);
    cout<<"Area of Circle is : "<<fResult<<"\n";
    
    return 0;
}