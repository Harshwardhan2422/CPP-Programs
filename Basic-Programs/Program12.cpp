#include<iostream>
using namespace std;

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14 * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue = 0.0f, fResult = 0.0f;
    
    cout<<"Enter The Radius of Circle : \n";
    cin>>fValue;
    
    fResult = CircleArea(fValue);
    cout<<"Area Of Circle is : "<<fResult<<"\n";
    
    return 0;
}