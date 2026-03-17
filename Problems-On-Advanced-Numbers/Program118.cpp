#include<iostream>
using namespace std;

class CountGreater
{
    public:
        int iSize;
        int *Arr;
        
        CountGreater(int iNum)
        {
            iSize = iNum;
            Arr = new int[iSize];
        }
        ~CountGreater()
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
        int DisplayCount(int iNo)
        {
            int iCount = 0, iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iNo)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int ilength = 0, iValue = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : ";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater Than Zero! \n";
        return -1;
    }
    
    CountGreater cobj(ilength);
    cobj.Accept();
    
    cout<<"Enter Given Number : ";
    cin>>iValue;
    
    iRet = cobj.DisplayCount(iValue);
    cout<<"Element Greater Than "<<iValue<<" Are : "<<iRet<<"\n";
    
    return 0;
}