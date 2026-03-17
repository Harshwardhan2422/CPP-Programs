// Row : 4 col : 4
/*
    *    B    C    D
    A    *    C    D
    A    B    *    D
    A    B    C    *
*/

#include<iostream>
using namespace std;

class PatternPrinter
{
    public:
        int iRow, iCol;
        
        PatternPrinter(int iNo1, int iNo2)
        {
            iRow = iNo1;
            iCol = iNo2;
        }
        
        void Display()
        {
            int i = 0, j = 0;
            char ch = '\0';
            
            for(i = 1; i <= iRow; i++)
            {
                for(j = 1, ch = 'A'; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"*\t";
                    }
                    else
                    {
                        cout<<ch<<"\t";
                    }
                    ch++;
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter Number Of Rows : ";
    cin>>iValue1;
    cout<<"Enter Number Of Columns : ";
    cin>>iValue2;
    
    PatternPrinter obj(iValue1, iValue2);
    obj.Display();

    return 0;
}