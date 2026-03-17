#include<iostream>
using namespace std;

class NumToAlpha 
{
    public:
        int iNo, iCase;
        
        NumToAlpha(int iNum1, int iNum2)
        {
            iNo = iNum1;
            iCase = iNum2;
        }
       
        char Display()
        {
            char ch = '\0';
             
            if((iNo >= 1) && (iNo <= 26))
            {
                if(iCase == 1)
                {
                    ch = 'A' + iNo - 1;        // UpperCase 
                }
                else if(iCase == 2)
                {
                    ch = 'a' + iNo - 1;        // Lowercase 
                }
            }
            return ch;
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    char cRet = '\0';
    
    cout<<"Enter Number : ";
    cin>>iValue1;
    cout<<"Please Enter Case (1 For UpperCase , 2 For LowerCase) \n";
    cin>>iValue2;
    
    NumToAlpha nobj(iValue1 , iValue2);
    cRet = nobj.Display();
    
    if(cRet == '\0')
    {
        cout<<"Invalid Input! \n";
    }
    else
    {
        cout<<"Number "<<iValue1<<" Corresponding Alphabet Is : "<<cRet<<"\n";
    }

    return 0;
}
    