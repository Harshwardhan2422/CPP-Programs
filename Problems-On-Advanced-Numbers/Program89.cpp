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
            
            cout<<"Please Enter the Values : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        int OddAddition()
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }
};

int main()
{
    int ilength = 0, iRet = 0;
    
    cout<<"Enter Number : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Invalid Size! Size must be Greater than zero \n";
        return -1;
    }
    
    Addition aobj(ilength);
    aobj.Accept();
    
    iRet =aobj.OddAddition();
    cout<<"Addition of Odd Elements Are : "<<iRet<<"\n";
    
    return 0;
}