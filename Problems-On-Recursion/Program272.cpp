#include<iostream>
using namespace std;

class DisplayResult 
{
    public:
        int iNo;
        
        DisplayResult(int iNum)
        {
            iNo = iNum;
        }
        
        void DisplayI()
        {
            while(iNo >= 1)
            {
                cout<<iNo<<"\n";
                iNo--;
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    DisplayResult dobj(iValue);
    dobj.DisplayI();

    return 0;
}