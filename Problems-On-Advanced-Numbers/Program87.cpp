#include<iostream>
using namespace std;

class CountOdd
{
    public:
        int *Arr;
        int iSize;
        
        CountOdd(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~CountOdd()
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
        
        int DisplayOdd()
        {
            int iCnt = 0, iCount = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iCount++ ;
                }
            }
            return iCount;
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
    
    CountOdd obj(ilength);
    
    obj.Accept();
    iRet = obj.DisplayOdd();
    cout<<"Total Number Of Odd Elements Are : "<<iRet<<"\n";
    
    return 0;
}