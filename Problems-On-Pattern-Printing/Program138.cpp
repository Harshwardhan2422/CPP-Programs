#include<iostream>
using namespace std;

void PatternPrinter()
{
    int i = 0, j = 0;
    
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
}

int main()
{
    PatternPrinter();

    return 0;
}