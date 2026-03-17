#include<iostream>
using namespace std;

class SumOfDigitR
{
    public:
        int iNo;
        
        SumOfDigitR(int iNum)
        {
            iNo = iNum;
        }
        
        int DisplayR()
        {
            static int iSum = 0;
            
            if(iNo != 0)
            {
                iSum = iSum + (iNo % 10);
                iNo = iNo / 10;
                DisplayR();
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    SumOfDigitR sobj(iValue);
    iRet = sobj.DisplayR();
    
    cout<<"Sum Of Digits Is : "<<iRet<<"\n";

    return 0;
}