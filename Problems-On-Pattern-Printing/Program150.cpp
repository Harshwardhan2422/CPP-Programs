// iRow : 4 iCol : 4
/*
    0    2    3    4
    1    0    3    4
    1    2    0    4
    1    2    3    0
    
*/

#include<iostream>
using namespace std;

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                cout<<"0\t";
            }
            else
            {
                cout<<j<<"\t";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter Number Of Rows : ";
    cin>>iValue1;
    cout<<"Enter Number Of Columns : ";
    cin>>iValue2;
    
    PatternPrinter(iValue1, iValue2);
    
    return 0;
}