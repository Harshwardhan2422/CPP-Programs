/*
    Input: 5
    output: A    B    C    D    E
*/

#include<iostream>
using namespace std;

class DisplayFrequency 
{
    public:
        int iNo;
        
        DisplayFrequency(int iNum)
        {
            iNo = iNum;
        }
        
        void Display()
        {
            int iCnt = 0;
            char ch = 65;
            
            for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
            {
                cout<<ch<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : ";
    cin>>iValue;
    
    DisplayFrequency dobj(iValue);
    dobj.Display();

    return 0 ;
}