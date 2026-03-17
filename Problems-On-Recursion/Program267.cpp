#include<iostream>
using namespace std;

void DisplayR()
{
    static int iCnt = 1;
    
    if(iCnt <= 5)
    {
        cout<<"*\n";
        iCnt++;
        DisplayR();
    }
}

int main()
{
    cout<<"Inside Main \n";
    DisplayR();
    cout<<"Inside End \n";
    
    return 0;
}