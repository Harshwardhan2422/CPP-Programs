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
        
        int Display()
        {
            int iCnt = 0, iSum = 0;
            
            while(iCnt <= iNo)
            {
                iSum = iSum + iCnt;
                iCnt++;
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
    iRet = aobj.Display();
    
    cout<<"Addition Is : "<<iRet<<"\n";

    return 0;
}