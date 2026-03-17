#include<iostream>
using namespace std;

class Addition
{
    public:
        int iSize;
        int *Arr;
        
        Addition(int iNum)
        {
            iSize = iNum;
            Arr = new int[iSize];
        }
        ~Addition()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            cout<<"Please Enter the Values : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        int DisplayLess(int iNo)
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iNo)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }
        
        int DisplayGreater(int iNo)
        {
            int iSum = 0, iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iNo)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }

};

int main()
{
    int ilength = 0, iValue = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater than zero \n";
        return -1;
    }
    
    Addition aobj(ilength);
    aobj.Accept();
    
    cout<<"Enter Number To Compare : \n";
    cin>>iValue;
    
    iRet = aobj.DisplayLess(iValue);
    cout<<"Addition Of less Element Are : "<<iRet<<"\n";
    
    iRet = aobj.DisplayGreater(iValue);
    cout<<"Addition of Greater Element Are : "<<iRet<<"\n";
    
    return 0;
}