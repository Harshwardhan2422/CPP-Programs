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
        
        int Display()
        {
            int iDigit = 0, iCount = 0;
            
            while(iNo != 0)
            {
                iDigit = (iNo % 10);
                {
                    if(iDigit % 2 == 0)
                    {
                        iCount++;
                    }
                }
                iNo = iNo / 10;
            }
            return iCount;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    CountEven cobj(iValue);
    iRet = cobj.Display();
    
    cout<<"Count Of Even Digit Is : "<<iRet<<"\n";
    
    return 0;
}