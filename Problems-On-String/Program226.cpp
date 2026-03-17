#include<iostream>
using namespace std;

class NumToAlpha 
{
    public:
        int iNo;
        
        NumToAlpha(int iNum)
        {
            iNo = iNum;
        }
        char Display()
        {
            char ch = '\0';
            
            if(iNo >= 1 && iNo <= 26)
            {
                ch = 'A' + iNo - 1;        // UpperCase 
            }
            return ch;
        }
};

int main()
{
    int iValue = 0;
    char cRet = '\0';
    
    cout<<"Enter Number : ";
    cin>>iValue;
    
    NumToAlpha nobj(iValue);
    cRet = nobj.Display();
    
    if(cRet == '\0')
    {
        cout<<"Invalid Input! \n";
    }
    else
    {
        cout<<"Number "<<iValue<<" Corresponding Alphabet Is : "<<cRet<<"\n";
    }

    return 0;
}