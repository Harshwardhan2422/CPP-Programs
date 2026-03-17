#include<iostream>
using namespace std;

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)        // Outer Loop(for Rows)
    {
        for(j = 1; j <= iCol; j++)        // Inner Loop(for Columns)
        {
            cout<<"#\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    cout<<"Enter Number Rows : ";
    cin>>iNo1;
    cout<<"Enter Number Of Columns : ";
    cin>>iNo2;
    
    PatternPrinter(iNo1,iNo2);

    return 0;
}