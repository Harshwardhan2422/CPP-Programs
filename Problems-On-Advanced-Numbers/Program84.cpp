#include<iostream>
using namespace std;

class Addition
{
    public:
        int *Arr;
        int iSize;
        
        Addition(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~Addition()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Please Entered the Values : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        void DisplayEven()
        {
            int iCnt = 0, iFlag = 0;
            
            cout<<"Even Elements are : ";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    cout<<Arr[iCnt]<<" ";
                    iFlag = 1;
                }
            }
            if(iFlag == 0)
            {
                cout<<"None";
            }
        }
};

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Invalid Size ! Size must be Greater than zero \n";
        return -1;
    }
    
    Addition aobj(ilength);
    aobj.Accept();
    aobj.DisplayEven();
    
    return 0;
}