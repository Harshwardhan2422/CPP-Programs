/*
    Input: 5
    output: A    1   B    2    C    3   D    4    E    5
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
            char ch = '\0';
        
            for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
            {
                cout<<iCnt<<"\t";
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