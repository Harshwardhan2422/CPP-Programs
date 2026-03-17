#include<iostream>
using namespace std;

class Addition 
{
    public:
        int iNo;
        
        Addition(int iNum)
        {
            iNo = iNum;
        }
        
        int DisplayR()
        {
            static int iCnt = 1;
            static int iSum = 0;
            
            if(iCnt <= iNo)
            {
                iSum = iSum + iCnt;
                iCnt++;
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
    
    Addition aobj(iValue);
    iRet = aobj.DisplayR();
    
    cout<<"Addition Is : "<<iRet<<"\n";

    return 0;
}