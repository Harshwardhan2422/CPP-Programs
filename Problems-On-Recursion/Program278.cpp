#include<iostream>
using namespace std;

class SumOfDigit
{
    public:
        int iNo;
        
        SumOfDigit(int iNum)
        {
            iNo = iNum;
        }
        
        int Display()
        {
            int iSum = 0;
            
            while(iNo != 0)
            {
                iSum = iSum + (iNo % 10);
                iNo = iNo / 10;
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    SumOfDigit sobj(iValue);
    iRet = sobj.Display();
    
    cout<<"Sum Of Digits Is : "<<iRet<<"\n";

    return 0;
}