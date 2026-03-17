#include<iostream>
using namespace std;

int main()
{
    float fRadius = 0.0f, fValue = 0.0f;
    
    cout<<"Enter Radius of Circle \n";
    cin>>fRadius;
    
    fValue = 3.14 * fRadius * fRadius;
    cout<<"Area of circle is : "<<fValue<<"\n";
    
    return 0;
}