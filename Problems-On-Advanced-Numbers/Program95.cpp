#include<iostream>
using namespace std;

class Search
{
    public:
        int iSize;
        int *Arr;
        
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
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNum)
                {
                    break;
                }
            }
            if(iCnt == iSize)
            {
                return false;
            }
            else
            {
                return true;
            }
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
    
    cout<<"Enter Element to Search: \n";
    cin>>iValue;
    
    bRet = sobj.Display(iValue);
    
    if(bRet == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is Not Present \n";
    }
    
    return 0;
}