#include<iostream>
using namespace std;

class CountEven 
{
    public:
        int iNo;
        
        CountEven(int iNum)
        {
            iNo = iNum;
        }
        
        int DisplayR()
        {
            static int iCount = 0;
            int iDigit = 0;
            
            if(iNo != 0)
            {
                iDigit = (iNo % 10);
                {
                    if(iDigit % 2 == 0)
                    {
                        iCount++;
                    }
                }
                iNo = iNo / 10;
                DisplayR();
            }
            return iCount;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter Number : ";
    cin>>iValue;
    
    CountEven cobj(iValue);
    iRet = cobj.DisplayR();
    
    cout<<"Even Count is : "<<iRet<<"\n";
    
    return 0;
}