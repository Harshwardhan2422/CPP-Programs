// Input: 5
/*
    a    a    a    a    
    b    b    b    b
    c    c    c    c
    d    d    d    d
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
            
            for(i = 1, ch = 'a';i <= iRow; i++, ch++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout<<ch<<"\t";
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