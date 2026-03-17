/*
Enter Number : 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include<iostream>
using namespace std;

class PatternDisplay 
{
    public:
        int iNo;
        
        PatternDisplay(int iNum)
        {
            iNo = iNum;
        }
        
        void Display()
        {
            int i = 0, j = 0, k = 0;
            
            for(i = 1; i <= iNo; i++)
            {
                for(k = i; k < iNo; k++)
                {
                    cout<<"  ";
                }
                for(j = 1; j <=(i * 2 - 1); j++)
                {
                    cout<<"* ";
                }
                cout<<"\n";
            }
            
            for(i = iNo; i >= 1; i--)
            {
                for(k = i; k < iNo; k++)
                {
                    cout<<"  ";
                }
                for(j = 1; j <= (i * 2 - 1); j++)
                {
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : ";
    cin>>iValue;

    PatternDisplay obj(iValue);
    obj.Display();

    return 0;
}