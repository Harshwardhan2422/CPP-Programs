// output 
/*
        *    *    *    *    *
        *    *    *    *    *
        H    A    R    S    H
        *    *    *    *    *
        *    *    *    *    *
*/

#include<iostream>
using namespace std;

class PatternDisplay 
{
    public:
        int iRow, iCol;
        
        PatternDisplay(int iNo1, int iNo2)
        {
            iRow = iNo1;
            iCol = iNo2;
        }
        
        void Display()
        {
            int i = 0, j = 0;
            char Arr[] = {'H','A','R','S','H'};
            
            if(iRow != iCol)
            {
                cout<<"Invalid Input!";
                return;
            }
            
            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == 3)
                    {
                        cout<<Arr[j - 1]<<"\t";
                    }
                    else
                    {
                        cout<<"*\t";
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
    
    PatternDisplay obj(iValue1, iValue2);
    obj.Display();

    return 0;
}