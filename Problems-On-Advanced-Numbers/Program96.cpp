#include<iostream>
using namespace std;

class Search
{
    public:
        int *Arr;
        int iSize;
        
        Search(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~Search()
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
        
        bool Display(int iNum)
        {
            int iCnt = 0;
            bool bFlag = false;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNum)
                {
                    bFlag = true;
                }
            }
            return bFlag;
        }
};

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must be Greater than zero !\n";
        return -1;
    }
    
    Search sobj(ilength);
    sobj.Accept();
    
    cout<<"Enter Element to Search : \n";
    cin>>iValue;
    
    bRet =sobj.Display(iValue);
    
    if(bRet == true)
    {
        cout<<"Elelment is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
    
    return 0;
}