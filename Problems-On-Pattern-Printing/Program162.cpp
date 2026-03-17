// Row = 4 Col = 4
/*
    a    b    c    d
    e    f    g    h
    i    j    k    l
    m    n    o    p
*/

#include<iostream>
using namespace std;

class PatternPrinter
{
    public:
        int iRow , iCol ;
        
        PatternPrinter(int iNo1, int iNo2)
        {
            iRow = iNo1;
            iCol = iNo2;
        }
        
        void Display()
        {
            int i = 0, j = 0;
            char ch = 'a';
            
            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++,ch++)
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