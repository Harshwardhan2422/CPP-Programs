/*
Enter Number Of Rows : 5
Enter Number Of Columns : 5
@                               $
        @               $
                *
        #               &
#                               &

*/

#include<iostream>
using namespace std;

class PatternPrinter
{
    public:
        int iRow ,iCol;
        
        PatternPrinter(int iNum1, int iNum2)
        {
            iRow = iNum1;
            iCol = iNum2;
        }
        
        void Display()
        {
            int i = 0, j = 0;
            
            if(iRow != iCol)
            {
                cout<<"Invalid Input!";
                return;
            }
            
            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if((i == 3) && (j == 3))
                    {
                        cout<<"*\t";
                    }
                    else if((i == j) && (j < 3))
                    {
                        cout<<"@\t";
                    }
                    else if((i == j) && (j > 3))
                    {
                        cout<<"&\t";
                    }
                    else if((i == 1) && (j == 5)||
                            (i == 2) && (j == 4))
                    {
                        cout<<"$\t";
                    }
                    else if((i == 5) && (j == 1)||
                            (i == 4) && (j == 2))
                    {
                        cout<<"#\t";
                    }
                    else
                    {
                        cout<<"\t";
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
    
    PatternPrinter obj(iValue1,iValue2);
    obj.Display();

    return 0;
}