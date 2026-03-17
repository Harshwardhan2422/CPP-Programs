/*
Enter Number Of Rows : 5
Enter Number Of Columns : 5
                *
        *       *       *
*       *       *       *       *
        *       *       *
                *
*/

#include<iostream>
using namespace std;

class PatternDisplay 
{
    public:
        int iRow, iCol;
        
        PatternDisplay(int iNum1, int iNum2)
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
                      if(i == 1 && j == 3)
                      {
                          cout<<"*\t";
                      }
                      else if(i == 2 && j >= 2 && j < 5)
                      {
                          cout<<"*\t";
                      }
                      else if(i == 3)
                      {
                          cout<<"*\t";
                      }
                      else if(i == 4 && j >= 2 && j < 5)
                      {
                          cout<<"*\t";
                      }
                      else if(i == 5 && j == 3)
                      {
                          cout<<"*\t";
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
    int iNo1 = 0, iNo2 = 0;
    
    cout<<"Enter Number Of Rows : ";
    cin>>iNo1;
    cout<<"Enter Number Of Columns : ";
    cin>>iNo2;

    PatternDisplay obj(iNo1, iNo2);
    obj.Display();
    
    return 0;
}