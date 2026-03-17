#include<iostream>
using namespace std;

void DisplayR()
{
    int i = 0;
    
    for(i = 1; i <= 5; i++)
    {
        cout<<"*\t";
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}