#include<iostream>
using namespace std;

void DisplayR()
{
    int i = 0;
    i = 1;
    
    while(i <= 5)
    {
        cout<<"*\t";
        i++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}