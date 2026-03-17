#include<iostream>
using namespace std;

void DisplayR()
{
    static int iCnt = 1;
    
    if(iCnt <= 5)
    {
        cout<<"*\t";
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}