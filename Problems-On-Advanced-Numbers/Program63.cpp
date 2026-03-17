#include<iostream>
using namespace std;

void Display()
{
    int Arr[] = {10,20,30,40};
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    Display();
    
    return 0;
}