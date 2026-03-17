#include<iostream>
using namespace std;

class AdditionGreater
{
    public:
        int iSize;
        int *Arr;
        
        AdditionGreater(int iNum)
        {
            iSize = iNum;
            Arr = new int[iSize];
        }
        ~AdditionGreater()
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
        
        int DisplayAddition(int iNo)
        {
            int iCnt = 0, iSum = 0;
            
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
    
    cout<<"Enter Number Of Element : ";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater Than Zero! \n";
        return -1;
    }
    
    AdditionGreater aobj(ilength);
    aobj.Accept();
    
    cout<<"Enter Given Number : ";
    cin>>iValue;
    
    iRet = aobj.DisplayAddition(iValue);
    cout<<"Sum of Number Greater Than "<<iValue<<" is : "<<iRet<<"\n";
    
    return 0;
}