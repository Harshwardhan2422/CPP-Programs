#include<iostream>
using namespace std;

class Minimum 
{
    public:
        int iSize;
        int *Arr;
        
        Minimum(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
            
        }
        ~Minimum()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Enter "<<iSize<<" Element : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                 cin>>Arr[iCnt];
            }
        }
        
        int DisplayMin()
        {
            if(Arr == NULL || iSize <= 0)
            {
                return -1;
            }
            int iCnt = 0, iMin = 0;
            iMin = Arr[0];
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int ilength = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater Than Zero : \n";
        return -1;
    }
    
    Minimum mobj(ilength);
    mobj.Accept();
    
    iRet =mobj.DisplayMin();
    
    if(iRet == -1)
    {
        cout<<"Invalid Input To Minimum Function \n";
    }
    else
    {
        cout<<"Minimum Number is :"<<iRet<<"\n";
    }
    
    return 0;
}