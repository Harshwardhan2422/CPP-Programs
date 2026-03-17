/*
    Input: 5
    output: a    b    c    d    e
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
            char ch = 97;
            
            for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
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