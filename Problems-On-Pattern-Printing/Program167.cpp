// Row : 4 col : 4
/*
    *    #    #    #
    $    *    #    #
    $    $    *    #
    $    $    $    *
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
            
            if(iRow != iCol)        // Filter 
            {
                cout<<"Invalid Input! \n";
                return;
            }
            
            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)        // Diagonal 
                    {
                        cout<<"*\t";
                    }
                    else if(i < j)        // Upper 
                    {
                        cout<<"#\t";
                    }
                    else
                    {
                        cout<<"$\t";        // Lower 
                    }
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