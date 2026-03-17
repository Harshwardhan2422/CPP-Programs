#include<iostream>
using namespace std;

class CountDigit 
{
    public:
        int iNo;
        
        CountDigit(int iNum)
        {
            iNo = iNum;
        }
        
        int DisplayR()
        {
            static int iCount = 0;
            
            if(iNo != 0)
            {
                iNo = iNo / 10;
                iCount++;
                DisplayR();
            }
            return iCount;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    CountDigit cobj(iValue);
    iRet = cobj.DisplayR();
    
    cout<<"Count Of Digits Is : "<<iRet<<"\n";

    return 0;
}